#include <stdio.h>
#include <stdlib.h>


int main()
{
    char C;
    printf("entrer un caractere :");
    scanf("%c",&C);
    if(C>='a'&& C<='z'){
        printf("le caractere %c est un alphabet miniscule",C);
    }
    else if(C>='A'&& C<='Z'){
        printf("le caractere %c est un alphabet majiiscule",C);
    }
    else{
        printf("le caractere %c n'est pas un alphabet",C);
    }

    return 0;
}
