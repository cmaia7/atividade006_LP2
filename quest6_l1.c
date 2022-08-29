#include <stdio.h>

int main(int argc,char** argv)
{
        int a,b,c;

        printf("Digite um numero:\n");
        scanf("%d",&a);

        printf("Digite outro numero:\n");
        scanf("%d",&b);

        printf("Digite mais um numero:\n");
        scanf("%d",&c);

        if (a>b&&b>c)
        {
                printf("%d,%d,%d\n",a,b,c);
        }
                else if (a>c&&c>b)
        {
                printf("%d,%d,%d\n",a,c,b);
        }
                else if(b>a&&b>c)
        {
                printf("%d,%d,%d\n",b,a,c);
        }
                else if(b>c&&c>a)
        {
                printf("%d,%d,%d",b,c,a);
        }
                else if(c>a&&a>b)
        {
                printf("%d,%d,%d",c,a,b);
        }
                else if(c>b&&b>a)
        {
                printf("%d,%d,%d",c,b,a);
        }

        return 0;
}

