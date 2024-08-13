#include <stdio.h>

/*
// Faça um algoritmo que peça a quantidade de horas trabalhadas no mês e a quantidade de
// dinheiro recebido por hora. O programa deve imprimir o total recebido no mês.
*/

int main() {
    // Cria a variavel horas trabalhadas
    float horasTrabalhadas;
    // Cria a variavel valor por hora
    float valorPorHora;

    // Imprime a mensagem para o usuario
    printf("Digite a quantidade de horas trabalhadas: ");
    // Recebe a quantidade de horas trabalhadas digitada pelo usuario
    scanf("%f", &horasTrabalhadas);

    // Imprime a mensagem para o usuario
    printf("Digite o valor recebido por hora: ");
    // Recebe o valor recebido por hora digitado pelo usuario
    scanf("%f", &valorPorHora);
    
    // Imprime o total recebido no mes
    printf("O total recebido no mes eh: %.2f", horasTrabalhadas * valorPorHora);
}