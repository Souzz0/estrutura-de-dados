// ex1: calculando area²
#include <stdio.h>

int main() {
    // Declaração das variáveis
    float largura;
    float comprimento;
    float area;  // Variável para armazenar o resultado da área

    // Solicita e captura os dados do usuário
    printf("Digite a largura: ");
    scanf("%f", &largura);  // Lê um número de ponto flutuante (largura)

    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);  // Lê um número de ponto flutuante (comprimento)

    // Calcula a área
    area = largura * comprimento;

    // Exibe o resultado
    printf("A área é: %.2f\n", area);

    return 0;
}