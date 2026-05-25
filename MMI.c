#include <stdio.h> //Entrada e saída (printf, scanf)
#include <stdlib.h> //Funções gerais (rand, srand)
#include <time.h> //Tempo e data (time)

int main() {
    // CRIAÇÃO DE UM JOGO DE MAIOR, MENOR E IGUAL EM C;
    int numComputador, numJogador, resultado;
    char tipoComparacao;

    // Gerar número aleatório
    srand(time(0)); //Isso pega o horário atual do computador para gerar números aleatórios diferentes a cada execução.
    numComputador = rand() % 100 + 1; //rand() é uma função da biblioteca stdlib.h que gera um número aleatório.

    // Inicio do jogo
    printf("\n==== Bem-vindo ao Jogo Maior, Menor ou Igual ====\n");
    printf("Você deve escolher um número e um tipo de comparação.\n");
    printf("M - Maior\n");
    printf("N - Menor\n");
    printf("I - Igual\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &tipoComparacao);

    printf("Escolha um número (entre 1 e 100): ");
    scanf("%d", &numJogador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("\nVocê escolheu a opção MAIOR!\n");
        printf("Número do Computador: %d\n", numComputador);
        printf("Número do Jogador: %d\n", numJogador);  
        resultado = (numJogador > numComputador) ? printf("*** Parabéns você VENCEU! ***\n") : printf("*** Você PERDEU! Tente novamente ***\n");
        break;

    case 'N':
    case 'n':
        printf("\nVocê escolheu a opção MENOR!\n");
        printf("Número do Computador: %d\n", numComputador);
        printf("Número do Jogador: %d\n", numJogador);  
        resultado = (numJogador < numComputador) ? printf("*** Parabéns você VENCEU! ***\n") : printf("*** Você PERDEU! Tente novamente ***\n");
        break;

    case 'I':
    case 'i':
        printf("\nVocê escolheu a opção IGUAL!\n");
        printf("Número do Computador: %d\n", numComputador);
        printf("Número do Jogador: %d\n", numJogador);      
        resultado = (numJogador == numComputador) ? printf("*** Parabéns você VENCEU! ***\n") : printf("*** Você PERDEU! Tente novamente ***\n");
        break;
    
    default:
        printf("\nOpção de jogo inválida!\n");
        break;
    }

    return 0;
}