#include <stdio.h>

/*
// Faça um algoritmo que receba dois números e informe se o primeiro é divisível pelo
// segundo.
*/

int main() {
    // Cria as variaveis de tipo inteiro
    int numero1, numero2;

    // Imprime a mensagem para o usuario
    printf("Digite o primeiro numero: ");
    // Recebe um numero digitado pelo usuario
    scanf("%d", &numero1);
    // Imprime a mensagem para o usuario
    printf("Digite o segundo numero: ");
    // Recebe um numero digitado pelo usuario
    scanf("%d", &numero2);

    // Verifica se o primeiro numero é divisivel pelo segundo
    if (numero1 % numero2 == 0) {
        // Imprime a mensagem para o usuario
        printf("O primeiro numero %d eh divisivel pelo segundo numero %d \n", numero1, numero2);
    } else {
        // Imprime a mensagem para o usuario
        printf("O primeiro numero %d nao eh divisivel pelo segundo numero %d \n", numero1, numero2);
    }
}