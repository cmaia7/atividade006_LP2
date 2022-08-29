#include <stdio.h>

int main(int argc,char **argv)
{
        int a,b,c;

        printf("Digite um numero:\n");
        scanf("%d",&a);

        printf("Digite outro numero:\n");
        scanf("%d",&b);

        printf("Digite mais um numero:\n");
        scanf("%d",&c);

        if (a>b&&a>c)
        {
                printf("O maior numero é:%d\n",a);
        }
        else if (b>a&&b>c)
        {
                printf("O maior numero é:%d\n",b);
        }

        else
        {
                printf("O maior numero é:%d\n",c);
        }

        if (a<b&&a<c)
        {
                printf("O menor numero é:%d\n",a);
        }
        else if (b<a&&b<c)
        {
                printf("O menor numero é:%d\n",b);
        }

        return 0;
}
