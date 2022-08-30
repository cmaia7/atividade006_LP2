#include <stdio.h>

int main(int argc, char**argv)
{

    int num, div;

    printf("Digite um número inteiro positivo: \n");
    scanf("%d", &num);

    while(num!=0)
    {
        div = num%10;
        printf("%d", div);
        num = num/10;
    }

    return 0;
}
