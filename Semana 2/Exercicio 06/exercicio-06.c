#include <stdio.h>

/*
// Faça um algoritmo que receba a quantidade de votos nulos, brancos e válidos de uma
// eleição. O programa deve imprimir o percentual de cada tipo de voto em relação ao
// número total de eleitores.
*/

int main() {
    // Cria a variavel votos nulos
    int votosNulos;
    // Cria a variavel votos brancos
    int votosBrancos;
    // Cria a variavel votos validos
    int votosValidos;
    // Cria a variavel total de eleitores
    int totalEleitores;

    // Imprime a mensagem para o usuario
    printf("Digite a quantidade de votos nulos: ");
    // Recebe a quantidade de votos nulos digitada pelo usuario
    scanf("%d", &votosNulos);

    // Imprime a mensagem para o usuario
    printf("Digite a quantidade de votos brancos: ");
    // Recebe a quantidade de votos brancos digitada pelo usuario
    scanf("%d", &votosBrancos);

    // Imprime a mensagem para o usuario
    printf("Digite a quantidade de votos validos: ");
    // Recebe a quantidade de votos validos digitada pelo usuario
    scanf("%d", &votosValidos);

    // Calcula o total de eleitores
    totalEleitores = votosNulos + votosBrancos + votosValidos;
    
    // Imprime o percentual de votos nulos
    printf("O percentual de votos nulos eh: %.2f%%\n", (float) votosNulos / totalEleitores * 100);
    // Imprime o percentual de votos brancos
    printf("O percentual de votos brancos eh: %.2f%%\n", (float) votosBrancos / totalEleitores * 100);
    // Imprime o percentual de votos validos
    printf("O percentual de votos validos eh: %.2f%%\n", (float) votosValidos / totalEleitores * 100);
}