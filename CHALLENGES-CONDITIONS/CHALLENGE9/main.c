#include <stdio.h>
#include <stdlib.h>

int main()
{
    int JJ,MM,AAAA;
    printf("entrer la date sous forme JJ/MM/AAAA : ");
    scanf("%d/%d/%d",&JJ,&MM,&AAAA);
    switch(MM){
        case 1:printf("%d-Janvier-%d",JJ,AAAA);
        break;
        case 2:printf("%d-Fevrier-%d",JJ,AAAA);
        break;
        case 3:printf("%d-Mars-%d",JJ,AAAA);
        break;
        case 4:printf("%d-Avril-%d",JJ,AAAA);
        break;
        case 5:printf("%d-Mai-%d",JJ,AAAA);
        break;
        case 6:printf("%d-Juin-%d",JJ,AAAA);
        break;
        case 7:printf("%d-Juillet-%d",JJ,AAAA);
        break;
        case 8:printf("%d-Aout-%d",JJ,AAAA);
        break;
        case 9:printf("%d-Septembre-%d",JJ,AAAA);
        break;
        case 10:printf("%d-Octobre-%d",JJ,AAAA);
        break;
        case 11:printf("%d-Novembre-%d",JJ,AAAA);
        break;
        case 12:printf("%d-Decembre-%d",JJ,AAAA);
        break;
        default:
            printf("merci de resaisir la date exacte sous forme declaree");
    }
    return 0;
}
