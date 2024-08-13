#include <stdio.h>

/*
// Faça um programa que pergunte quanto você ganha por mês. Calcule e imprima: 
// i) Salário bruto; 
// ii) Quanto pagou de imposto (8%); 
// iii) Quanto pagou ao sindicato (5%);
// iv) Salário líquido.
*/

int main() {
    // Cria a variavel do salario bruto
    float salarioBruto;
    // Cria a variavel do imposto
    float imposto;
    // Cria a variavel do sindicato
    float sindicato;
    // Cria a variavel do salario liquido
    float salarioLiquido;

    // Pergunta quanto você ganha por mês
    printf("Quanto voce ganha por mes? ");
    // Salva o valor digitado na variavel salarioBruto
    scanf("%f", &salarioBruto);

    // Calcula o imposto
    imposto = salarioBruto * 0.08;
    // Calcula o sindicato
    sindicato = salarioBruto * 0.05;
    // Calcula o salario liquido
    salarioLiquido = salarioBruto - imposto - sindicato;

    // Imprime o salario bruto
    printf("Salario liquido: R$%.2f\n", salarioLiquido);
}