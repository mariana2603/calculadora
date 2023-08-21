#include <stdio.h>
float somar(float n1, float n2){ 
    printf("\nNumero 1: ");
    scanf("%f", &n1);
       
    printf("\nNumero 2: ");      
    scanf("%f", &n2);
    return n1 + n2;
}
int main(){
    float n1, n2;
    float resultado; 
    int escolha;

  
    printf("Escolha a operacao:\n");
    printf("1. Divisao\n");
    printf("2. Multiplicacao\n");
    printf("3. Soma\n"); 
    printf("4. Subtração\n");
    
    scanf("\n%d", &escolha);

    switch(escolha) {
        case 1:
            resultado = CalcDivisao(n1, n2);
            printf("Resultado da divisao = %.2f\n", resultado);
            break;
        case 2:
            resultado = multiplicar(n1, n2);
            printf("Resultado da multiplicacao = %.2f\n", resultado);
            break;
        case 3:
            resultado = somar(n1, n2);
            printf("Resultado da soma = %.2f\n", resultado);
            break;
            
        case 4:
            resultado = sub(n1, n2);
            printf("Resultado da subtração = %.2f\n", resultado);
            break;
            
            
        default:
            printf("Opcao invalida!\n");
    }

return 0;
}