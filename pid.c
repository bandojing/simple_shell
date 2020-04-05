#include <stdio.h>
#include <unistd.h>

/**
  * main - pid
  *
  * Return: Always 0.
  */
int main (void)
{
	/*make variable to hold value of pid function*/
	pid_t my_pid;

	/*store value of getpid(); in my_pid*/
	my_pid = getpid();

	/*print out return value of call to getpid*/
	printf("process id: %u\n", my_pid);
	
	return (0);
}
/**
  *A process is an instance of an executing program, that has a unique proce  *ss ID. This process ID is used by many functions and system calls to inte  *ract with and manipulate processes. In order to retrieve the current proc  *ess’ ID, you can use the system call getpid (man 2 getpid):
  */
