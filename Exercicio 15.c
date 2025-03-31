#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
  setlocale (LC_ALL,"");
    int N, numero, soma = 0;

    printf("Quantos números você quer somar? ");
    scanf("%d", &N);

    int i = 1;

    while (i <= N) {
        printf("Digite o %dº número (positivo): ", i);
        scanf("%d", &numero);

        if (numero >= 0) {
            soma += numero;  // Soma o número válido
            i++;  
        } else {
            printf("Número inválido, por favor, digite um numero positivo.\n");
        }
    }


    printf("A soma dos números digitados é: %d \n", soma);

    return 0;
}
