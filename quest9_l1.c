#include <stdio.h>
#include <math.h>

int main(int argc,char** argv)
{
        float x1, x2, d, x, a, b, c, r;

        printf("Digite o valor de a: ");
        scanf("%f",&a);

        if(a==0)
        {
                printf("A equação não é do 2° grau\n");

                return 0;
        }

        printf("Digite o valor de b: ");
        scanf("%f",&b);

        printf("Digite o valor de c: ");
        scanf("%f",&c);

        d = (b*b) - (4*a*c);

        if(d<0)
        {
                printf("A equação não possui raízes reais\n");

                return 0;
        }

        x = -b/2*a;

        if(d==0)
        {
                x1 = -b/2*a;
                printf("A equação possui apenas uma raíz real: %.2f\n",x1);

                return 0;
        }

         if(d>0)
        {
                r = sqrt(d);
                x1 = ((-b-r)/(2*a));
                x2 = ((-b +r)/(2*a));

                printf("As raízes são: x1 = %.2f e x2 = %.2f\n",x1,x2);
        }

        return 0;
}
