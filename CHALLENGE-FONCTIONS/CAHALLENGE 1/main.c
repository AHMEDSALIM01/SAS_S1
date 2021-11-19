#include <stdio.h>
#include <stdlib.h>

void add(int a,int b){
   int ad=a+b;
   printf("l'addition de %d et %d = %d",a,b,ad);
}
int main()
{
    int a,b;
    printf("donner a =");
    scanf("%d",&a);
    printf("donner b =");
    scanf("%d",&b);
    add(a,b);
    return 0;
}
