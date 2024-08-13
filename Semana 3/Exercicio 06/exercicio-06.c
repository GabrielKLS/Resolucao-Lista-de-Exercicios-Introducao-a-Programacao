#include <stdio.h>

/*
// Faça um programa que receba um número inteiro entre um e nove e imprima a mensagem
// que está relacionada com o número digitado de acordo com a tabela abaixo. Caso o
// número digitado não esteja entre um e nove, imprima: "Código inválido".
// - 1: Lave as mãos
// - 2: Passe alcool em gel
// - 3: Use máscara
// - 4: Cuide dos idosos
// - 5: Cultive paciência
// - 6: Cultive sabedoria
// - 7: Ame o próximo
// - 8: Exercite a disciplina
// - 9: Acalme a mente
*/

int main() {
    // Cria a variavel de tipo inteiro
    int numero;

    // Imprime a mensagem para o usuario
    printf("Digite um numero entre 1 e 9: ");
    // Recebe um numero digitado pelo usuario
    scanf("%d", &numero);

    // Verifica o numero digitado
    switch (numero) {
        case 1:
            // Imprime a mensagem para o usuario
            printf("Lave as maos \n");
            break;
        case 2:
            // Imprime a mensagem para o usuario
            printf("Passe alcool em gel \n");
            break;
        case 3:
            // Imprime a mensagem para o usuario
            printf("Use mascara \n");
            break;
        case 4:
            // Imprime a mensagem para o usuario
            printf("Cuide dos idosos \n");
            break;
        case 5:
            // Imprime a mensagem para o usuario
            printf("Cultive paciencia \n");
            break;
        case 6:
            // Imprime a mensagem para o usuario
            printf("Cultive sabedoria \n");
            break;
        case 7:
            // Imprime a mensagem para o usuario
            printf("Ame o proximo \n");
            break;
        case 8:
            // Imprime a mensagem para o usuario
            printf("Exercite a disciplina \n");
            break;
        case 9:
            // Imprime a mensagem para o usuario
            printf("Acalme a mente \n");
            break;
        default:
            // Imprime a mensagem para o usuario
            printf("Codigo invalido \n");
            break;
    }
}