#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int i, j;
    float nota[3][3];
    float media[2];
    float soma;
    char disciplina[3][250];
    float peso[3] = {3, 3, 4};

    for (i = 0; i < 3; i++)
    {
        printf("Nome da disciplina: ");
        scanf("%s", &disciplina[i]);

        system("cls");

        for (j = 0; j < 3; j++)
        {
            printf("Digite sua nota %dª :", j + 1);
            scanf("%f", &nota[i][j]);

            soma += (nota[i][j]);

            system("cls");
        }

        media[i] = soma / 10;
        soma = 0;
    }

    for (i = 0; i < 3; i++)
    {
        printf("\n Nome da disciplina: %s \n", disciplina[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Sua nota %dª : %.f\n", j + 1, nota[i][j]);
        }
        printf("\nMédia: %.1\n", media[i]);
    }
}