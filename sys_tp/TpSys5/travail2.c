#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>

void sig_handler(int sig){
	if(sig == SIGINT){
		printf("signal recu SIGINT \n");
	}
}

int main(int argc, char *argv[]){

	if(signal(SIGINT, sig_handler)==SIG_ERR){
		printf("on ne peux pas atteaper SIGINT");
	}

	while(1)
	sleep(1);
	return 0;
}
