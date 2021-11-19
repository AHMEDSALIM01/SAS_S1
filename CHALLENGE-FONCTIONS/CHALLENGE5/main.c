#include <stdio.h>
#include <stdlib.h>
void tri_fusion(int i,int j, int T[],int Tp[]){
if(j<=i)
    return;
int m= (i+j)/2;
tri_fusion(i,m,T,Tp);
tri_fusion(m+1,j,T,Tp);
int pg=i;
int pd=m+1;
int c;
for(c=i;c<=j;c++){
    if(pg==m+1)
       {Tp[c]=T[pd];
       pd++;
       }
     else if(pd==j+1){
        Tp[c]=T[pg];
            pg++;}
     else if(T[pd]<T[pg]){
        Tp[c]=T[pd];
        pd++;}
     else {
        Tp[c]=T[pg];
        pg++;
     }
}
for(c=i;c<=j;c++){
    T[c]=Tp[c];}
}


int main()
{
    int a,i,T[70],Tp[70];
    printf("donne la taille de tableau : \n");
    scanf("%d",&a);
    printf("donner %d d'entier",a);
    for(i=0;i<a;i++)
        scanf("%d",&T[i]);
    tri_fusion(0,a-1,T,Tp);
    printf("\n les nombres apres le tris: \n");
    for(i=0;i<a;i++){
            printf("%5d ",T[i]);
            }
    return 0;
}
