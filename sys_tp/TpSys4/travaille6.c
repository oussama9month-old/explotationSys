#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
	FILE *f1;
	char str[60];

	f1 = fopen("test.txt", "r");
	if(f1 == NULL){
		printf("Erreur d'ouvrir le fichier");
		exit(1);
	}
	if(fgets(str, 60, f1)!=NULL){
	puts(str);
	}
	fclose(f1);
	return 0;
	}


