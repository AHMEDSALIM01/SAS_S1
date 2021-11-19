#include <stdio.h>
#include <stdlib.h>

void tris_bulle(int a,int T[])
{
 int i,e,c;
 do{
    c=0;
    for(i=0;i<a-1;i++){
        if(T[i]>T[i+1]){
            e=T[i];
            T[i]=T[i+1];
            T[i+1]=e;
            c++;}
            }
             }while(c>0);
return;
}
int main(){
    int a,T[60],i;
    printf("donner la taille de tableau de 1 a 60:");
    scanf("%d",&a);

    for(i=0;i<a;i++){
        printf("l'element %d = \n",i+1);
        scanf("%d",&T[i]);
        }
    printf("avant le tris :");
        for(i=0;i<a;i++){
    printf("%7d",T[i]);}
    printf("\n");
    printf("apres le tris :");

    tris_bulle(a,T);
    for(i=0;i<a;i++){
    printf("%7d",T[i]);}
    printf("\n");


    return 0;
}
