/*3. Peca ao usuario para digitar tres valores inteiros e imprima a soma deles.*/
#include <stdio.h>
int main(){

    int valor1, valor2, valor3, resultado;

    printf("Digite 3 valores para somar: ");
    scanf("%d %d %d", &valor1, &valor2, &valor3);
    resultado = valor1 + valor2 + valor3;
    printf("%d + %d + %d = %d", valor1, valor2, valor3, resultado);
}