#include<signal.h>
#include<sys/types.h>
#include<stdlib.h>
#include<stdio.h>

#include<string.h>
#include<errno.h>
#include<unistd.h>

void baz(int sig,siginfo_t* info,void *context)
{
  if (sig==SIGUSR1)
      printf("SIGUSR1 %d\n",info->si_value.sival_int);
  else if(sig==SIGRTMIN)
      printf("SIGRTMIN %d\n",info->si_value.sival_int);
  else 
      printf("SIGRTMIN+1 %d\n",info->si_value.sival_int);
  return ;
}

void sig_output()
{
  sigset_t set;
  sigprocmask(0,NULL,&set);
  printf("blokowane sa: ");
  if (sigismember(&set,SIGUSR1))
      printf("SIGUSR1 ");
  if(sigismember(&set,SIGUSR2))
      printf(" SIGUSR2");
  printf("\n");
  return ;
}


int received=0;
int usr2=0;

void foo(int sig)
{
  return ;
}

void usr1_handler(int sig)
{
  printf("usr1_handler\n");
  //++received;
}



void usr2_handler(int sig)
{
  usr2=1;
}

int main(int argc,char **argv)
{
  int i=0;
  pid_t pid=getppid();
  struct sigaction a;
  struct sigaction a2;
  a.sa_flags=SA_SIGINFO;
  sigset_t set;
  sigemptyset(&set);
  //sigaddset(&set,SIGRTMAX);
  sigemptyset(&(a.sa_mask));
  sigemptyset(&(a2.sa_mask));

printf("pid=  %d \n ", pid);
  a.sa_sigaction=baz;
  sigaction(SIGRTMIN,&a,NULL);
  a2.sa_handler=usr1_handler;
  sigaction(SIGRTMIN+1,&a2,NULL);
  //sigprocmask(SIG_SET,&(a.sa_mask),NULL);
  while(!usr2)
  {
      printf("while\n"); 
      sigsuspend(&set);

  }
      //pause()
  printf("after while\n");
  return EXIT_SUCCESS;
}
