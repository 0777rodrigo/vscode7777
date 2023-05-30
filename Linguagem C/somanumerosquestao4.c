#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i, soma, numero = 0;

    for (i = 0; i < 5; i++)
    {

        printf("digite um numero \n ");
        scanf("%i", &numero);
        soma += numero;
    }

    printf("soma dos numeros %i \n ", soma)


}