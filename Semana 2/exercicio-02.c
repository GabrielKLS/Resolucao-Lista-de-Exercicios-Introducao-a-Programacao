#include <stdio.h>

/*
// Faça um algoritmo que receba dois números digitados pelo usuário e 
// imprima a multiplicação entre eles.
*/

int main() {
    // Cria as variaveis de tipo inteiro num1 e num2
    int num1, num2;

    // Imprime a mensagem para o usuario
    printf("Digite dois numeros: ");
    // Recebe dois numeros digitados pelo usuario
    scanf("%d %d", &num1, &num2);
    
    // Imprime a multiplicacao dos numeros digitados
    printf("A multiplicacao dos numeros %d e %d eh: %d\n", num1, num2, num1 * num2);
}