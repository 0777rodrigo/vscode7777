#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int idade;

    printf("informe sua idade \n ");
    scanf("%i", &idade);

    if (idade < 18 || idade > 65)

    {
        printf("nao e obrigado a votar");
    }
    else
    {
        printf("obrigado a votar");
    }
    return 0;
}
