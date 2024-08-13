#include <stdio.h>

/*
// Faça um programa que receba 3 números e imprima o maior número digitado.
*/

// Vale ressaltar que um loop poderia ser utilizado para detectar o maior número,
// principalmente em casos com muitos números a serem comparados,
// mas como o curso ainda não ensinou loops, a solução abaixo é a mais adequada.

int main() {
    // Cria as variaveis de tipo inteiro
    int numero1, numero2, numero3;
    // Cria a variavel de tipo inteiro
    int maior;

    // Imprime a mensagem para o usuario
    printf("Digite o primeiro numero: ");
    // Recebe um numero digitado pelo usuario
    scanf("%d", &numero1);
    // Imprime a mensagem para o usuario
    printf("Digite o segundo numero: ");
    // Recebe um numero digitado pelo usuario
    scanf("%d", &numero2);
    // Imprime a mensagem para o usuario
    printf("Digite o terceiro numero: ");
    // Recebe um numero digitado pelo usuario
    scanf("%d", &numero3);

    // Verifica o maior número
    maior = numero1;
    if (numero2 > maior) {
        maior = numero2;
    }
    if (numero3 > maior) {
        maior = numero3;
    }

    // Imprime a mensagem para o usuario
    printf("O maior numero digitado foi: %d \n", maior);
}