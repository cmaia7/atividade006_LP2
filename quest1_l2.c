/*

Carlos Flávio de Lima Maia - 1915120007
Cassiel Stavros de Melo dutra - 2115310005
Lázaro Augusto Guimarães Goes - 191520087

*/



#include <stdio.h>

int main(int argc,char** argv)
{
        int i, num, maior;
        i = 1;
        maior = 0;

        do{

                printf("Digite o %d° número: ",i++);
                scanf("%d",&num);

                if(num>maior)
                {
                        maior = num;
                }

        }
        while(i<=5);

        printf("O maior é: %d\n",maior);

        return 0;
}
