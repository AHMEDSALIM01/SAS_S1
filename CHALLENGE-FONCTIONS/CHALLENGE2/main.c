#include <stdio.h>
#include <stdlib.h>

void echanger(){
    int c;
    int a,b;
    c=a;
    a=b;
    b=c;

}
int main()
{
int a,b;
    printf("donner la valeur de a , a= ");
    scanf("%d",&a);
    printf("donner la valeur de b , b= ");
    scanf("%d",&b);
    printf("a= %d ,b=%d ",a,b);
    echanger();
    printf("a= %d ,b=%d ",a,b);
    return 0;
}
