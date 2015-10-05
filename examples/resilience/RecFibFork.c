#include <sys/types.h>
#include <sys/wait.h>
#include <err.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*! \file  fibonacci-fork.c
 *  \brief Computes n-th Fibonacci numbers in parallel with
 *         help of Unix processes.
 *
 *  $Id: fibonacci-fork.c,v 1.3 2010/05/30 21:17:11 nickf Exp $
 */

size_t fibonacci( size_t n )
{
	pid_t pid1, pid2;
	size_t fib;
	int status;

	switch ( n )
	{
		case 0:	 return 0;
		case 1:	 /* FALLTHRU */
		case 2:	 return 1;
		default: break;
	}

	pid1 = fork();

	if ( pid1 == 0 ) exit( fibonacci( n - 1 ));
	else if ( pid1 < 0 ) err( 1, "fork" );

	pid2 = fork();

	if ( pid2 == 0 ) exit( fibonacci( n - 2 ));
	else if ( pid2 < 0 ) err( 1, "fork" );

	if ( waitpid( pid1, &status, 0 ) == -1 ) err( 1, "waitpid" );

	fib = WEXITSTATUS( status );

	if ( waitpid( pid2, &status, 0 ) == -1 ) err( 1, "waitpid" );

	return fib + WEXITSTATUS( status );
}


int main()
{
int a = fibonacci(2);
printf("%d \n ", a);
}

/* eof */

