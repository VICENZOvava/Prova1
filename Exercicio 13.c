#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    float salario;

    printf("Bem-vindo! Aqui calcularemos o seu imposto de renda.\n");
    printf("Digite o seu salário (SEM R$): ");
    scanf("%f", &salario);

    if (salario <= 1903.98) {
        printf("Você é isento de imposto.\n");
    } else if (salario >= 1903.99 && salario <= 2826.65) {
        printf("A sua alíquota é de 7,5%%.\n");
     } else if (salario >=2826.66 && salario <= 3751.05 ) {
          printf(" A sua aliquota é de 15%% \n");
     } else if (salario >=3751.06 && salario <= 4664.68 ) {
          printf(" A sua aliquota é de 22,5%% \n");
     } else if (salario >=4664.69) {
          printf(" A sua aliquota é de 27.5%% \n");
    } else {
        printf("Outros calculos de alíquota não foram implementadas ainda.\n");
    }

    return 0;
}