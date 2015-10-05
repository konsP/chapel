#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

/* This flag controls termination of the main loop. */
volatile sig_atomic_t keep_going = 1;

/* The signal handler just clears the flag and re-enables itself. */
void
catch_alarm (int sig)
{
  keep_going = 0;
  signal (sig, catch_alarm);
}

void
do_stuff (void)
{
  
}

void
main (void)
{
  pid_t pid=getppid();
  printf("pid = %d \n ", pid);
  /* Establish a handler for SIGALRM signals. */
  signal (SIGALRM, catch_alarm);

  /* Set an alarm to go off in a little while. */
 // alarm (2);

  /* Check the flag once in a while to see when to quit. */
puts ("Doing stuff while waiting for alarm....");
  while (keep_going)
    do_stuff ();

  printf("DONE \n");
   
  printf("exiting in 5 \n");

  sleep(5);

}
