#include <stdio.h>

/*
// Faça um programa que receba uma medida em metros e que 
// imprima o equivalente em centímentros.
*/

int main() {
    // Cria a variavel de tipo inteiro metros
    int metros;

    // Imprime a mensagem para o usuario
    printf("Digite um valor em metros: ");
    // Recebe um valor em metros digitado pelo usuario
    scanf("%d", &metros);
    
    // Imprime o valor em centimetros
    printf("O valor em centimetros eh: %d", metros * 100);
}