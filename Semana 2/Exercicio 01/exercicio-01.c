#include <stdio.h>

/*
// Faça um algoritmo que receba um número digitado pelo usuário e escreva: "Numero
// digitado: x". Nesse caso, x é o número digitado pelo usuário.
*/

int main() {
    // Cria a variavel de tipo inteiro numeroDigitado
    int numeroDigitado;

    // Imprime a mensagem para o usuario
    printf("Digite um numero: ");
    // Recebe um numero digitado pelo usuario
    scanf("%d", &numeroDigitado);
    
    // Imprime o numero digitado
    printf("Numero digitado: %d\n", numeroDigitado);
}