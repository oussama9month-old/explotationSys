#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<string.h>
void func_react(int sig)
{
 printf("\nle signal %d a etait detecter\n",sig);
 (void)signal(SIGINT,SIG_DFL);
}

void main(int argc, char *argv[]){
	 (void)signal(SIGINT,func_react);
	while(1){
	 printf("\nTAZI NADRANI\n");
	 sleep(1);
	}
}
	
