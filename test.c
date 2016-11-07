#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int pid;
	int status = 0;
	int i;

	for(i=1;i<=3;i++)
	{
		pid = fork();
		if(pid!=0)
		{
			/*parent*/
			printf("I am parent.%d ",getpid());
			printf("My child.%d\n",pid);
			pid = wait(&status);
		}	
		else
		{
			/*chlid*/
			printf("I am child.%d ",getpid());
			printf("My parent.%d\n",getppid());
			exit(status);
		}
	}

}
