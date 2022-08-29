#include <stdio.h>

int main(int argc, char** argv)
{
    int a,b;

    printf("Digite um numero: \n");
    scanf("%d", &a);

    printf("Digite um outro numero: \n");
    scanf("%d", &b);

    if (a > b)
    {
        printf("O maior numero é: %d\n",a);
    }
    else
    {
        printf("O maior numero é: %d\n",b);
    }

    return 0;
}
