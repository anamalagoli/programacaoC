#include <stdio.h> //Entrada e saída (printf, scanf)
#include <stdlib.h> //Funções gerais (rand, srand)
#include <time.h> //Tempo e data (time)

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0)); //Isso pega o horário atual do computador para gerar números aleatórios diferentes a cada execução.

    printf("*** JOGO DE JOKENPÔ ***\n");
    printf("Escolha uma opção: \n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Digite o número correspondente a sua escolha: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1; //rand() é uma função da biblioteca stdlib.h que gera um número aleatório.

    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: Pedra X ");
        break;
    case 2:
        printf("Jogador: Papel X ");
        break;
    case 3:
        printf("Jogador: Tesoura X ");
        break;
    default:
        printf("Opção inválida\n");
        break;
    }

    switch (escolhaComputador)
    {
    case 1:
        printf("Computador: Pedra\n");
        break;
    case 2:
        printf("Computador: Papel\n");
        break;
    case 3:
        printf("Computador: Tesoura\n");
        break;
    }

    if (escolhaComputador == escolhaJogador) {
        printf("### Jogo empatou! ###\n");
    } else if ((escolhaJogador == 1) && (escolhaComputador == 3) || 
               (escolhaJogador == 2) && (escolhaComputador == 1) || 
               (escolhaJogador == 3) && (escolhaComputador == 2)) {
        printf("### Parabéns, você GANHOU!!! ###\n");
    } else {
        printf("### Você perdeu! ###\n");
    }

    return 0;

}