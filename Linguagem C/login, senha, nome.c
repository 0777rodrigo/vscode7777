#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char nome[100] = "aluno";
    char senhasalva[200] = "caderno";
    char login[300];
    char senha[400];

    printf("seu login \n ");
    gets(login);

    printf("sua senha \n ");
    gets(senha);

strcmp(login, nome) == 0 && strcmp(senha, senhasalva) == 0)
{
    printf("login liberado");
}
else
{
    printf("login incorreto");
}

return 0;
}