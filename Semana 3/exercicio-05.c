#include <stdio.h>

/*
//  Faça um programa que receba a massa e a altura de uma pessoa. O programa deve
// calcular e imprimir o IMC dessa pessoa, além de, em seguida, informar qual situação a
// pessoa se enquadra. O cálculo do IMC é dado por: IMC = massa / (altura * altura).
// As situações são:
// - Abaixo do peso: IMC menor que 20
// - Peso normal: IMC entre 20 e 25
// - Sobrepeso: IMC entre 25 e 30
// - Obesidade: IMC entre 30 e 40
// - Obesidade mórbida: IMC maior que 40
*/

int main() {
    // Cria as variaveis de tipo flutuante
    float massa, altura, imc;

    // Imprime a mensagem para o usuario
    printf("Digite a massa da pessoa em quilogramas: ");
    // Recebe um numero digitado pelo usuario
    scanf("%f", &massa);
    // Imprime a mensagem para o usuario
    printf("Digite a altura da pessoa em metros: ");
    // Recebe um numero digitado pelo usuario
    scanf("%f", &altura);

    // Calcula o IMC
    imc = massa / (altura * altura);

    // Verifica a situação da pessoa
    if (imc < 20) {
        // Imprime a mensagem para o usuario
        printf("A pessoa esta abaixo do peso. IMC: %.2f \n", imc);
    } else if (imc >= 20 && imc < 25) {
        // Imprime a mensagem para o usuario
        printf("A pessoa esta com o peso normal. IMC: %.2f \n", imc);
    } else if (imc >= 25 && imc < 30) {
        // Imprime a mensagem para o usuario
        printf("A pessoa esta com sobrepeso. IMC: %.2f \n", imc);
    } else if (imc >= 30 && imc < 40) {
        // Imprime a mensagem para o usuario
        printf("A pessoa esta com obesidade. IMC: %.2f \n", imc);
    } else {
        // Imprime a mensagem para o usuario
        printf("A pessoa esta com obesidade morbida. IMC: %.2f \n", imc);
    }
}