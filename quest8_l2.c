#include <stdio.h>

int main(int argc, char** argv)
{
        int num, construtor = 3, t1 = 0, t2 = 1, t3;

        printf("Digite um número: ");
        scanf("%d",&num);

        printf("%d-> %d",t1,t2);

        while(construtor<=num)
        {
                t3 = t1 + t2;
                t1 = t2;
                t2 = t3;
                construtor += 1;

                printf("-> %d",t3);
        }

        printf("\n");

        return 0;
}
