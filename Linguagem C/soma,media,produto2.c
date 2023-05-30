#include <stdio.h>
#include <stdlib.h>

int main()
{

    float numero1, numero2, soma, produto, media;

    printf("digite o primeiro numero \n ");
    scanf("%f", &numero1);

    printf("digite o segundo numero \n ");
    scanf("%f", &numero2);

    soma = (numero1 + numero2);
    media = (soma / 2);
    produto = (numero1 * numero2);

    printf("soma dos numeros %2.f \n ", soma);
    printf("produto dos valores %2.f \n ", produto);
    printf("media dos valores %2.f \n ", media);

    if (numero1 > numero2)

    {

        printf("maior valor %2.f \n ", numero1);
        printf("menor valor %2.f \n ", numero2);
    }
    else
    {

        printf("maior valor %2.f \n ", numero2);
        printf("menor valor %2.f \n ", numero1);
    }
    return 0;
}
