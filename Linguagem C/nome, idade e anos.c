#include <stdio.h>
#include <stdlib.h>

main()
{
    float primeiraNota, segundaNota, terceiraNota, media;

    int idade;
    char nome[100];

    printf("digite seu nome \n ");
    fgets(nome, 100, stdin);

    printf("digite sua idade \n ");
    scanf("%d",&idade);


    printf("digite a primeira nota \n ");
    scanf("%f", &primeiraNota);

    printf("digite a segunda nota \n ");
    scanf("%f", &segundaNota);

    printf("digite a terceira nota \n");
    scanf("%f", &terceiraNota);

    media = (primeiraNota + segundaNota + terceiraNota) / 3;

    if (media < 7)
    {
        printf("reprovado");
    }
    else
    {
        printf("aprovado");
    }

    return 0;
}
