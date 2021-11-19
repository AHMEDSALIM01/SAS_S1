#include <stdio.h>
#include <stdlib.h>

float divededby(int n,int a){
    return (float)n/a;
    }

int main()
{
    int a,n;
    printf("donner la valeur de n= ");
    scanf("%d",&n);
    printf("donner la valeur de b= ");
    scanf("%d",&a);
    divededby(n,a);
    printf("la division %.1f",divededby(n,a));

    return 0;
}
