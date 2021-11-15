#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char mot[50],rmot[50];
    printf("entrer un mot avec :\n");
    scanf("%s",&mot);
    strlwr(mot);
    strcpy(rmot,mot);
    strrev(rmot);
    int R=strcmp(mot,rmot);
    if(R==0){
        printf("le mot %s est un palindrome",mot);
    }
    else
    {
        printf("le mot %s n'est pas un palindrome");
    }
    return 0;
}
