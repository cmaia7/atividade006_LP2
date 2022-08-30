#include <stdio.h>

int main(int argc,char** argv)
{
        int impar, par, i, num;
        i = 1;
        impar = 0;
        par = 0;

        do{
                printf("Digite o %d° número: ",i++);
                scanf("%d",&num);

                if(num%2==0)
                {
                        par = par + 1;
                }
                else
                {
                        impar = impar + 1;
                }
        }
        while(i<=10);

        printf("Pares: %d\n",par);
        printf("Impares: %d\n",impar);

        return 0;
}

