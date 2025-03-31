    #include <stdio.h>
    #include <locale.h>
    int main(){
    setlocale(LC_ALL,"");
    int n1;
    printf("Digite um numero \n");
    scanf("%d", &n1);
    if (n1 == 0)
    {
        printf("O numero %d é igual a 0!", n1);
    }
    else if (n1 < 0)
    {
        printf("O numero %d é negativo", n1);
    }
    else 
    {
        printf("O numero %d é positivo", n1);
    }
    return 0;
}