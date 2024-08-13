#include <stdio.h>

/*
// Faça um algoritmo que receba o raio de um círculo, calcule e imprima a área do círculo 
// (A = πr2)
*/

int main() {
    // Cria a variavel raio
    float raio;
    // Define o valor de pi
    float pi = 3.14;
    // Cria a variavel area
    float area;

    // Imprime a mensagem para o usuario
    printf("Digite o raio do circulo: ");
    // Recebe o valor do raio digitado pelo usuario
    scanf("%f", &raio);

    // Calcula a area do circulo
    area = pi * (raio * raio);
    
    // Imprime a area do circulo, "%.2f" imprime o valor com 2 casas decimais
    printf("A area do circulo eh: %.2f", area);
}