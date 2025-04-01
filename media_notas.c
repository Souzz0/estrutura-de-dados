//ex2 Calculando a media de 4 notas.
#include <stdio.h>

// Calculando média de 4 notas.
int main() {
    // Declaração das variáveis
    float n1, n2, n3, n4, media;

    // Solicita e captura os dados do usuário
    printf("Digite a Primeira Nota: ");
    scanf("%f", &n1); 

    printf("Digite a Segunda Nota: ");
    scanf("%f", &n2); 
    
    printf("Digite a Terceira Nota: ");
    scanf("%f", &n3); 
    
    printf("Digite a Quarta Nota: ");
    scanf("%f", &n4); 

    // Calcula a média
    media = (n1 + n2 + n3 + n4) / 4;

    // Exibe o resultado
    printf("A Média é: %.2f\n", media);

    // Condições para aprovação ou reprovação
    if (media < 5) {
        printf("Reprovado\n");
    } else if (media >= 6) {
        printf("Aprovado\n");
    } else {
        printf("Recuperação\n"); // Caso a média esteja entre 5 e 6
    }

    return 0;
}