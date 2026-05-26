#include <stdio.h>
 
// Função recursiva para imprimir números de n até 1
void recursiveLoop(int numero) {
    if (numero > 0) {
        recursiveLoop(numero - 1);  // Chama a si mesma com n - 1
        printf("%d ", numero);  // Imprime o valor atual de n
        
    }
}
 
int main() {
    int numero = 5;
    printf("Contagem regressiva: ");
    recursiveLoop(numero);
    return 0;
}