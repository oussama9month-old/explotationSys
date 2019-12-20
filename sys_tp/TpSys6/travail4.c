#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<sys/wait.h>
#define TAILLE_MESSAGE 256
int main(void)
{
pid_t pid_fils;
int descripteurTube[2];
char messageLire[TAILLE_MESSAGE],messageEcrire[TAILLE_MESSAGE];
pipe(descripteurTube);
pid_fils=fork();
if(pid_fils==-1)
{
 fprintf(stderr,"ERRUR de creation du processus.\n");
return 1;
}
if(pid_fils)
 {
 close(descripteurTube[1]);
 read(descripteurTube[0],messageLire,TAILLE_MESSAGE);
 printf("je suis le fils %d.\n j'ai recu le message suivant du pere =\"%s\"\n",getpid(),messageLire);
 }
 else
 {
 close(descripteurTube[0]);
 sprintf(messageEcrire,"Bonjour fils je suis ton pere");
 printf("\nje suis le pere =%d j'envoie le message suivant\"%s\" a mon fils\n",getpid(),messageEcrire);
 write(descripteurTube[1],messageEcrire,TAILLE_MESSAGE); 
 }
wait(NULL);
return 0;
}
