
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void main(int argc, char *argv[]){
	int i;
	if(argc <=1)
	{
		printf("\nLe programme n'a recu aucun argument\n");
	}
	else{
		for(i=0;i<argc;i++){
			printf("Argument %d : %s\n", i, argv[i]);
		}
	}
}


