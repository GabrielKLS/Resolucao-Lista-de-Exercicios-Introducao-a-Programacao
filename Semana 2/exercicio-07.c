#include <stdio.h>

/*
// Faça um programa que pergunte a quantidade de quilômetros percorridos por um carro
// alugado e a quantidade de dias do aluguel. Calcule o preço do aluguel, levando em
// consideração que o aluguel do carro custa R$ 60,00 por dia e R$ 0,15 por quilometro
// rodado.
*/

int main() {
    // Cria a variavel de tipo inteiro quilometros
    int quilometros;
    // Cria a variavel de tipo inteiro dias
    int dias;
    // Cria a variavel de tipo float preco
    float preco;

    // Imprime a mensagem para o usuario
    printf("Digite a quantidade de quilometros percorridos: ");
    // Recebe a quantidade de quilometros percorridos digitada pelo usuario
    scanf("%d", &quilometros);

    // Imprime a mensagem para o usuario
    printf("Digite a quantidade de dias do aluguel: ");
    // Recebe a quantidade de dias do aluguel digitada pelo usuario
    scanf("%d", &dias);

    // Calcula o preco do aluguel
    preco = (dias * 60) + (quilometros * 0.15);
    
    // Imprime o preco do aluguel
    printf("O preco do aluguel eh: R$ %.2f", preco);
}