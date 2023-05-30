#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i, numeroPar, numeroImpar, numero;

    for (i = 0; i < 5; i++)
    {

        printf("digite um numero \n ");
        scanf("%i", &numero);

        if (numero % 2 == 0)
        {

            numeroPar++;
        }
        else
        {
            numeroImpar++;
        }
    }
    printf("quantidade de numeros pares %i \n ", numeroPar);
    printf("quantidade de numeros impares %i \n ", numeroImpar);

    return 0;
}
