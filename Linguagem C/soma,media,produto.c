#include <stdio.h>
#include <stdlib.h>

int main()
{

    float soma, produto, media, numero1, numero2;

    printf("digite o primeiro numero \n ");
    scanf("%f", &numero1);

    printf("digite o segundo numero \n ");
    scanf("%f", &numero2);

    soma = (numero1 + numero2);
    media = (soma / 2);
    produto = (numero1 * numero2);

    printf("soma dos numeros %2.f \n ", soma);
    printf("produto dos valores %2.f \n ", produto);
    printf("media dos numeros %2.f \n ", media);

    if (numero1 == numero2)
    {
        printf("numeros sao iguais");
    }
    else if (numero1 > numero2)
    {
        printf("O numero maior %2.f \n", numero1);
        printf("O numero menor  %2.f \n", numero2);
    }
    else
    {
        printf("O numero maior %2.f \n", numero2);
        printf("O numero menor  %2.f \n", numero1);
    }

    return 0;
}
