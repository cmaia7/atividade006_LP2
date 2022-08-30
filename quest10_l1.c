#include <stdio.h>

int main(int argc,char** argv)
{
	int a,b,c,r1,r2,r3,r4,r5;

	printf("Digite o valor do saque: ");
	scanf("%d",&a);

	if(a<10 || a>600)
	{
		printf("|Valor inválido|\n");
	}

	b = a/100;
	c= a/50;

	if(b==0 && c==b)
	{
		r1 = b;
		r2 = c;
		r3 = a/10;
		r4 = (a%10)/5;
		r5 = ((a%10)%5);
	}
	else if(b==0)
	{
		r1 = b;
		r2 = c;
		r3 = (a%50)/10;
		r4 = ((a%50)%10)/5;
		r5 = (((a%50)%10)%5);
	}
	else
	{
		r1 = b;
		r2 = (a%100)/50;
		r3 = ((a%100)%50)/10;
		r4 = (((a%100)%150)%10)/5
		r5 = (((a%100)%50)%10)%5;
	}

	printf("Notas de 100: %d \n",r1);
	printf("Notas de 50: %d \n",r2);
	printf("Notas de 10: %d \n",r3);
	printf("Notas de 5: %d \n",r4);
	printf("Notas de 1: %d \n",r5);

	return 0;
}
