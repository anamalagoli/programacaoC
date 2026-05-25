#include <stdio.h>

int main() {
    float nota1, nota2, media;
    int opcao;

    printf("\n==== SISTEMA DE NOTAS DO ALUNO ====\n");
    printf("Menu: \n");
    printf("1. Média das notas; \n");
    printf("2. Gerenciamento de status; \n");
    printf("3. Sair. \n");
    printf("Digite o número corresponte a opção desejada: ");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1:
        printf("\n==== CÁLCULO DA MÉDIA ====\n");
        printf("Digite suas notas: \n");
        printf("Nota 1: ");
        scanf("%f", &nota1);
        printf("Nota 2: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;

        printf("\n==== MÉDIA: %.2f ====\n", media);

        break;
    case 2: 
        printf("\n==== GERENCIAMENTO DE STATUS ====\n");

        printf("Digite a média do estudante: ");
        scanf("%f", &media);

        if (media >= 7) {
            printf("\n==== Parabéns, você foi APROVADO! ====\n");
        } else if (media >= 5) {
            printf("\n==== Você está de RECUPERAÇAO! ====\n");
        } else {
            printf("\n==== Você está REPROVADO! Estude mais da próxima vez. ====\n");
        }
        break;
    case 3:
        printf("\nSaindo...\n");
        break;
    default:
        printf("\nOpção inválida!\n");
        break;
    }

    return 0;
}