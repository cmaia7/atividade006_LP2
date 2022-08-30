#include <stdio.h>

int main(int argc,char** argv)
{
        int nota;

        do{
                printf("Digite uma nota de 0 a 10: \n");
                scanf("%d",&nota);

                if(nota<0||nota>10)
                {
                        printf("valor inválido\n");
                }
        }
        while(nota<0||nota>10);

        return 0;
}

