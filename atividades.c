#include <stdio.h>

int main() {
  int opcao;
  float saldo = 1000;

  printf("Escolha uma opção: \n");
  printf("1. Consultar o saldo.\n");
  printf("2. Fazer deposito.\n");
  printf("3. Fazer saque.\n");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    printf("Seu saldo é de R$ %.2f", saldo);
    break;
  case 2:
    printf("Digite o número da sua conta.\n");
    break;
  case 3:
  printf("Digite o valor do saque.\n");
    break;
  default:
    printf("Opção inválida!\n");
    break;
  }
}