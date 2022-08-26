#include <stdio.h>

int main(int argc,char** argv)
{
        int i, num, media, soma;
        i = 1;
        soma = 0;

        while(i<=5)
        {
                printf("Dgite o %d° número: ",i++);
                scanf("%d",&num);

                soma = soma + num;
        }
        media = (soma/5);

        printf("A média é: %d\n",media);
        printf("A soma é: %d\n",soma);

        return 0;
}
