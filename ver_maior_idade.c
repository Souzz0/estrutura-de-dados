//ex3: Calculando idade.
#include <stdio.h>

// Estrutura para armazenar a data de nascimento
struct Data {
    int dia;
    int mes;
    int ano;
};

int main() {
    struct Data data;
    int anoAtual, idade;

    // Solicita a data de nascimento ao usuário
    printf("Digite sua data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano);

    // Solicita o ano atual para calcular a idade
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    // Calcula a idade com base no ano atual
    idade = anoAtual - data.ano;

    // Exibe a idade calculada
    printf("Idade calculada: %d anos\n", idade);

    // Verifica a faixa etária
    if (idade <= 17) {
        printf("Menor de Idade\n");
    } else if (idade >= 60) {
        printf("Idoso\n");
    } else {
        printf("Adulto\n");
    }

    return 0;
}