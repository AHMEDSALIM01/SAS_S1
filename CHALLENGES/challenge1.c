#include <stdio.h>
#include <stdlib.h>

int main()
{
    char prenom[25];
    char nom[25];
    char sex[20];
    int age ,numero;
    printf("donner votre prenom\n");
    scanf("%s",&prenom);
    printf("donner votre nom\n");
    scanf("%s",&nom);
    printf("donner votre age\n");
    scanf("%d",&age);
    printf("donner votre sex\n");
    scanf("%s",&sex);
    printf("donner votre numero\n");
    scanf("%d",&numero);
    printf("%s\n %s\n %d\n %s\n %d\n",prenom,nom,age,sex,numero);

    return 0;
}
