#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
  setlocale (LC_ALL,"");
    int opcao;
    float quant, resultado;
      
        do // inico do while
    {
        printf ("\n---FARMACIA DO VAVA---\n");
        printf ("Digite o numero correspondente de qual medicamento vc deseja  \n");
        printf ("1 - Paracetamol - R$ 5.00  \n");
        printf ("2 - Ibuprofeno - R$ 7.50 \n");
        printf ("3 -  Dipirona - R$ 4.00  \n");
        printf ("4 -  Amoxicilina - R$ 12.00   \n");
        printf ("0 - Sair \n");
        scanf  ("%d",&opcao);
        
        switch (opcao){
            case 1:
             printf ("Qual a quantidade deste medicamento voce deseja? \n");
             scanf ("%f", &quant);
             resultado = 5.00 * quant;
             printf ("o valor total da sua compra é %5.f", resultado );
             break;
             case 2:
             printf ("Qual a quantidade deste medicamento voce deseja? \n");
             scanf ("%f", &quant);
             resultado = 7.50 * quant;
             printf ("o valor total da sua compra é %5.f", resultado );
             break;
             case 3:
             printf ("Qual a quantidade deste medicamento voce deseja? \n");
             scanf ("%f", &quant);
             resultado = 4.00 * quant;
             printf ("o valor total da sua compra é %5.f", resultado );
             break;
             case 4:
             printf ("Qual a quantidade deste medicamento voce deseja? \n");
             scanf ("%f", &quant);
             resultado = 12.00 * quant;
             printf ("o valor total da sua compra é %5.f", resultado );
             break;
            case 0:
            printf ("Até logo...\n");
            break;
            default:
            printf ("opção invalida, Tente novamente");
    }
              printf ("\n Pressione Enter para continuar");
        getchar (); // Funciona com scanfhttps://www.onlinegdb.com/online_c_compiler#tab-stderr
        getchar (); // Aguarda o enter 
        
        system("clear");
    } while (opcao !=0);
return 0;
}