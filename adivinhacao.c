#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao;
    int numeroSecreto, palpite;

    printf("***JOGO DE ADIVINHAR O NÚMERO***\n");
    printf("MENU:\n");
    printf("1. Iniciar o jogo;\n");
    printf("2. Ver as regras do jogo;\n");
    printf("3. Sair do jogo;\n");
    printf("Digite o número da opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("***INICIANDO O JOGO***\n");
        srand(time(0));
        numeroSecreto = rand() % 10 + 1;
        printf("Digite um número entre 1 e 10: \n");
        scanf("%d", &palpite);
        
        if (numeroSecreto == palpite) {
            printf("Parabéns você VENCEU!\n");
        } else {
            printf("Você errou! O número é %d \n", numeroSecreto);
        }
        break;
    case 2:
        printf("***REGRAS DO JOGO***\n");
        printf("Escolher um número entre 1 e 10 e contar com a sorte.\n");
        break;
    case 3:
        printf("Saindo do jogo...");
        break;
    default:
        printf("Opção inválida!");
        break;
    }
}