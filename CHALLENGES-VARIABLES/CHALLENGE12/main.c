#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("donner le nombre entier a de 3 chiffre a=");
    scanf("%d",&a);
    b=(a%10)*100;
    a=a/10;
    b=b+(a%10)*10;
    a=a/10;
    b+=a;
    printf("l'inverse de nombre a est b=%d",b);
    return 0;
}
