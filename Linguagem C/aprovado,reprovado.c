#include <stdio.h>
#include <stdlib.h>

int main()
{

    float primeiraNota, segundaNota, media;

    printf("digite a primeira nota");
    scanf("%f", &primeiraNota);

    printf("digite a segunda nota");
    scanf("%f", &segundaNota);

    media = (primeiraNota + segundaNota) / 2;

    if (media >= 7)
    {
        printf("aprovado");
    }
    else if (media >= 5)
    {
        printf("recuperacao");
    }
    else
    {
        printf("reprovado");
    }

    return 0;
}