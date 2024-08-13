#include <stdio.h>

/*
// Construa um algoritmo que leia três números do teclado e calcule a média. Se a média for
// maior ou igual à sete, imprima: "Parabéns, você foi aprovado!". Caso contrário, imprima:
// "Você fará prova final!".
*/

int main() {
    // Cria as variaveis de tipo flutuante
    float numero1, numero2, numero3;
    // Cria a variavel de tipo float
    float media;

    // Imprime a mensagem para o usuario
    printf("Digite o primeiro numero: ");
    // Recebe um numero digitado pelo usuario
    scanf("%f", &numero1);
    // Imprime a mensagem para o usuario
    printf("Digite o segundo numero: ");
    // Recebe um numero digitado pelo usuario
    scanf("%f", &numero2);
    // Imprime a mensagem para o usuario
    printf("Digite o terceiro numero: ");
    // Recebe um numero digitado pelo usuario
    scanf("%f", &numero3);

    // Calcula a media
    media = (numero1 + numero2 + numero3) / 3;

    // Verifica se a media é maior ou igual a 7
    if (media >= 7) {
        // Imprime a mensagem para o usuario
        printf("Parabens, voce foi aprovado! Com a media: %.1f \n", media);
    } else {
        // Imprime a mensagem para o usuario
        printf("Voce fara a prova final! Com a media: %.1f \n", media);
    }
}