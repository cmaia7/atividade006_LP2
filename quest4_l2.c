#include <stdio.h>

int main(int argc,char** argv)
{
        int n1, n2;

        printf("Digte um número:\n");
        scanf("%d",&n1);

        printf("Digite outro número:\n");
        scanf("%d",&n2);

        while(n1<n2-1)
        {
                n1 = n1 + 1;
                printf("%d",n1);
        }

        while(n2<n1-1)
        {
                n2 = n2 + 1;
                printf("%d ",n2);
        }

        return 0;
}
