#include <stdio.h>

int main(int argc,char **argv)
{
        float n1, n2, media,pf,mediaf;

        printf("Digite a nota da ap1:\n");
        scanf("%f",&n1);

        printf("Digite a nota da ap2:\n");
        scanf("%f",&n2);

        media=(n1+n2)/2;

        if (media>=8)
        {
                printf("A media é: %.2f\n",media);
        }

        else if(media<8)
        {
                printf("A média é: %.2f, deverá fazer a prova final.\n",media);

                printf("Digite a nota da PF: \n");
                scanf("%f",&pf);

        }

        mediaf = ((2*media)+pf)/3;

        if(mediaf>=6)
        {
                printf("A média é %.2f, Aluno aprovado.\n",mediaf);
        }
        else
        {
                printf("A média é %.2f, Aluno reprovado.\n",mediaf);
        }
        return 0;
}
o
