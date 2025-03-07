#include <stdio.h>

void main(){
    char nomDUtilisateur[20];
    printf("Quel est ton nom ? ");
    scanf("%s", nomDUtilisateur);
    printf("Bonjour %s\n", nomDUtilisateur);
}