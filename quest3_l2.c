#include <stdio.h>

int main(int argc,char** argv)
{
        int impar, i = 25;

        printf("Os números ímpares entre 1 e 50 são:\n");

        while(i>=1)
        {
                impar = 2*i-1;
                printf("%d \n",impar);
                i--;
        }

        return 0;
}
