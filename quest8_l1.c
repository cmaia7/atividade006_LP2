#include <stdio.h>

int main(int argc,char **argv)
{
        int l1, l2, l3;

        printf("informe o tamanho do 1° lado: ");
        scanf("%d",&l1);

        printf("informe o tamanho do 2° lado: ");
        scanf("%d",&l2);

        printf("informe o tamanho do 3° lado: ");
        scanf("%d",&l3);

        if((l1+l2>l3)&&(l2+l3>l1)&&(l3+l1>l2))
        {
                printf("é um triângulo");

                if((l1==l2)&&(l1==l3))
                {
                        printf("\né um triângulo equilátero");
                }
                else if((l1==l2 && l1 != l3)||(l2==l3 && l2 != l1) && (l3==l1 && l3 != l2))
                {
                        printf("\né um triângulo isóceles. \n");
                }
                else if(l1 != l2 && l1 != l3 && l3!=l2)
                {
                        printf("\né um triângulo escaleno. \n");
                }
        }
        else
        {
                printf("Não é um triângulo.");
        }

        return 0;
}

