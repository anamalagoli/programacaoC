#include <stdio.h>

int main() {
    float temperatura, umidade;
    unsigned int estoque, estoqueMin = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);   

    printf("Entre com a quantidade de estoque: \n");
    scanf("%u", &estoque);

    if (temperatura > 30) {
        printf("Temperatura está alta.\n");
    } else {
        printf("Temperatura dentro dos parâmetros.\n");
    }

    if (umidade > 80) {
        printf("Umidade elevada.\n");
    } else {
        printf("Umidade dentro dos paramêtros\n");
    }

    if (estoque < estoqueMin) {
        printf("Estoque abaixo do mínimo!\n");
    } else {
        printf("Estoque dentro dos paramêtros.\n");
    }
}