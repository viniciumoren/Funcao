#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

setlocale(LC_ALL, "portuguese");

int i,j;
char banda [3][250];
char integrante [3][5][250];

for ( i = 0; i < 3; i++)
{
    printf ("Nome da %d ª banda:", i+1);
    scanf ("%s", &banda[i]);

    fflush (stdin);


for ( j = 0; j < 5; j++)
{
    printf ("Nome do integrante %dª:", j+1);
    scanf ("%s", &integrante[i][j]);

    fflush(stdin);
}
}

for ( i = 0; i < 3; i++)
{
    printf ("Banda %d ª: %s \n", i+1, banda[i]);

for ( j = 0; j < 5; j++)
{
    printf ("Integrante %dª: %s\n", j+1, integrante[i][j]);
}
}
}