#include <stdio.h>

/*
// Faça um algoritmo que receba um número x digitado pelo usuário. O programa deve
// imprimir se x é impar ou par.
*/

int main() {
    // Cria a variavel de tipo inteiro
    int numero;

    // Imprime a mensagem para o usuario
    printf("Digite um numero: ");
    // Recebe um numero digitado pelo usuario
    scanf("%d", &numero);

    // Verifica se o numero é par
    if (numero % 2 == 0) {
        // Imprime a mensagem para o usuario
        printf("O numero %d eh par\n", numero);
    } else {
        // Imprime a mensagem para o usuario
        printf("O numero %d eh impar\n", numero);
    }
}