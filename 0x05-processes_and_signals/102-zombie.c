#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * custom_infinite_while - Run an infinite while loop.
 * Return: Always 0.
 */

int custom_infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - creates five zombie processes.
 * Return: Always 0.
 */

int main(void)
{
	pid_t custom_pid;

	char custom_count = 0;

	while (custom_count < 5)
	{
		custom_pid = fork();
		if (custom_pid > 0)
		{
			printf("Zombie process created, PID: %d\n", custom_pid);
			sleep(1);
			custom_count++;
		}
		else
			exit(0);
	}

	custom_infinite_while();
	return (EXIT_SUCCESS);
}
