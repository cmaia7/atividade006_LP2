#include <stdio.h>

int main(int argc,char **argv)
{

        int a,b,c;

        printf("Preço do produto 'a' em reais:\n");
        scanf("%d",&a);

        printf("Preço do produto 'b' em reais:\n");
        scanf("%d",&b);

        printf("Preço do produto 'c' em reais:\n");
        scanf("%d,",&c);

        if (a<b&&a<c)
        {
                printf("Compre o produto 'a'\n");
        }

        if (b<a&&b<c)
        {
                printf("Compre o produto 'b'\n");
        }
        else
        {
                printf("Compre o produto 'c'\n);
        }
        return 0;
}
