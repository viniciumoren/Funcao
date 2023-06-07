#include <stdio.h>

int main()
{


    void cabecalho (){
        printf ("--------------------------------------------");
        printf ("\t\t Titulo");
        printf ("--------------------------------------------");
    }
    


    void maiorNumero(int numeroUm, int numeroDois)
    {
        int maior;
        if (numeroUm > numeroDois)
        {
            maior = numeroUm;
        }
        else
        {
            maior = numeroDois;
        }
        printf("Maior numero: %d \n", maior);
    }

    void menorNumero(int numeroUm, int numeroDois)
    {

        int maior;
        if (numeroUm > numeroDois)
        {

            maior = numeroUm;
        }
        else
        {
            maior = numeroDois;
        }

        printf ("Menor Valor: %d", maior);
    }

    
    
    int numeroUm, numeroDois;

    cabecalho();

    printf("Digite um numero: ");
    scanf("%d", &numeroUm);

    printf("Digite outro numero:");
    scanf("%d", &numeroDois);

    maiorNumero (numeroUm, numeroDois);
    menorNumero (numeroUm, numeroDois);

    return 0;
}