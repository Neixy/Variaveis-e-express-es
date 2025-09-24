/*28. Faca a leitura de tres valores e apresente como resultado a soma dos quadrados dos tres valores lidos.*/
#include <stdio.h>
int main(){
    float valor1, valor2, valor3, resultado;
    printf("Digite os 3 valores para calcular seus quadrados: ");
    scanf("%f %f %f", &valor1, &valor2, &valor3);
    valor1 = valor1 * valor1;
    valor2 = valor2 * valor2;
    valor3 = valor3 * valor3;
    printf("Valor de seus quadrados: %.2f %.2f %.2f\n", valor1, valor2, valor3);
    resultado = valor1 + valor2 + valor3;
    printf("Resultado da soma dos quadrados = %.2f", resultado);
}