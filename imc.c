// ex4: Calculando o IMC.
// Calcule o IMC é calculado dividindo o peso em quilos pela altura em metro ao quadrado 
// Formula: peso/(altura*altura).
 /*
    IMC Tabela
    18.5 a 24.9     normal
    25 a 29.9       sobre peso
    30 a 34.9       obesidade classe I
    35 a 39.9       obesidade classe II
    */
   #include <stdio.h>

   int main() {
       float peso, altura, imc;
   
       printf("Seja Bem-Vindo!\n");
       printf("Vamos calcular o seu IMC.\n");
       
       printf("Digite o seu peso em kg (use '.' para decimal, ex: 70.5): ");
       scanf("%f", &peso);
   
       printf("Digite a sua altura em metros (use '.' para decimal, ex: 1.75): ");
       scanf("%f", &altura);
   
       // Cálculo do IMC
       imc = peso / (altura * altura);
   
       // Exibição do resultado
       printf("\nSeu IMC: %.2f\n", imc);
   
       // Classificação do IMC
       if (imc >= 18.5 && imc <= 24.9) {
           printf("Classificação: Normal.\n");
       } 
       else if (imc >= 25 && imc <= 29.9) {
           printf("Classificação: Sobrepeso.\n");
       } 
       else if (imc >= 30 && imc <= 34.9) {
           printf("Classificação: Obesidade Classe I.\n");
       } 
       else if (imc >= 35 && imc <= 39.9) {
           printf("Classificação: Obesidade Classe II.\n");
       } 
       else if (imc >= 40) {
           printf("Classificação: Obesidade Classe III (mórbida).\n");
       } 
       else {
           printf("Classificação: Abaixo do peso.\n");
       }
   
       return 0;
   }
   