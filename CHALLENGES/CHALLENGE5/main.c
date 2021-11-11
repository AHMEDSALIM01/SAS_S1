#include <stdio.h>
#include <stdlib.h>
#define A 32
#define B 1.8
int main()
{
    float C,F,S;
	printf("donner la temperature en F T(F)=");
	scanf("%f",&F);
	C=(F-A)/B;
	S=C;

	printf("la temperature en C T(C)=%.2f",C);
	if(C<4)
	{
		printf(" sensation tres froids");
	}

	if(C>=4 && C<24)
	{
		printf(" sensastion froids");
			}
	if(C>=24 && C<32)
	{
		printf(" sensastion chauds");
	}

	if(C>=32)
	{
		printf(" sensation tres chauds");

     }
    return 0;
}
