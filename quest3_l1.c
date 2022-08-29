#include <stdio.h>

int main(int argc,cha** argv)
{
        int a,b,c;

        printf("digite um número:\n");
        scanf("%d",&a);

        printf("Digite outro número;\n");
        scanf("%d",&b);

        printf("Dgite mais um número\n");
        scanf("%d",&c);

        if (a>b&&a>c)
        {
                printf("O maior número e:%d\n",a);
        }

        else if (b>a&&b>c)
        {
                printf("O maior numero é:%d\n",b);
        }

        else if  (c>a&&c>b)
        {
                printf("O maior numero é:%d\n",c);
        }
        return 0;
}
