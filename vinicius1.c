#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int i, j;
    float nota[3][3];
    float media[3];
    float soma;
    char disciplina[3][250];
    float peso[3] = {3, 3, 4};

    for (i = 0; i < 3; i++)
    {
        printf("Nome da disciplina: ");
        scanf("%s", &disciplina[i]);

        system("cls");

        fflush(stdin);

        for (j = 0; j < 3; j++)
        {
            
            do
            {
            printf("Digite sua nota %dª :", j + 1);
            scanf("%f", &nota[i][j]);            

            system("cls");
          
            } while (nota[i][j]>10 );

            soma += (nota[i][j]);

            fflush(stdin);
            
            
        }

        media[i] = soma / j;
        soma = 0;

        fflush(stdin);
    }

    for (i = 0; i < 3; i++)
    {
        printf("\n Disciplina: %s \n", disciplina[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Sua nota %dÂª : %.f\n", j + 1, nota[i][j]);
        }
        printf("\nMedia: %.1f\n", media[i]);
    }
}
