#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>//NADRANI Oussama
#include<string.h>//TAZI Achraf
#include<pthread.h>

pthread_t tid[2];
int counter;
void *doSomeThing(void *arg){
	unsigned long i;
	counter += 1;
	  printf("\n Job %d started \n", counter);//deb
	for(i=0;i<100;i++) printf("\nle job %d est entrain de s'executer",counter);//execution
	  printf("\n\n Job %d Finihed \n", counter);//fin
		return NULL;
}
//NADRANI Oussama TAZI Achraf
int main(void){
	int i=0;
	int pid1,pid2;
	pid1 = pthread_create(&tid[0	],NULL,&doSomeThing,NULL);
    pid2 = pthread_create(&tid[1],NULL,&doSomeThing,NULL);
	if(pid1 != 0 || pid2 != 0)
		printf("\n can't create thread ");
	pthread_join(tid[0],NULL);
	pthread_join(tid[1],NULL);
	return 0;
}
