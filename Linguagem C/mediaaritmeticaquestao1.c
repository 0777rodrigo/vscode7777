#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    float somaNota, media, nota, contador;
    char resposta;

    do
    {

        printf("insira uma nota \n ");
        scanf("%f", &nota);

        printf("deseja inserir mais uma nota \n ");
        scanf("%s", &resposta);

        somaNota += nota;
        contador++;

    } while (resposta == 's');

    media = somaNota / contador;

    printf("a media foi %2.f \n ", media);

    return 0;
}
