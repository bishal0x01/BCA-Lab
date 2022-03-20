#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
int pid,ppid,childid;

printf("Before calling fork:\n");

childid = fork();
pid=getpid();
ppid=getppid();

printf("Hello my id is %d, parent is %d & child is %d \n",pid,ppid,childid);
return 0;
}
