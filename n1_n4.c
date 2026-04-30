#include <stdio.h>

int main() {
    int idade;
    float altura;
    char opcao;
    char nome[20]; 

    printf("digite sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Sua altura é: %.2f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Seu nome é: %s\n", nome);

    printf("Digite uma opção (s/n): ");
    scanf(" %c", &opcao);
    printf("A opção digitada é: %c\n", opcao);
}
