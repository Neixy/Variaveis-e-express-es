/*18. Leia um valor de volume em metros cubicos m3 e apresente-o convertido em litros. A
formula de conversao e: L = 1000 ∗ M, sendo L o volume em litros e M o volume em
metros cubicos.*/
#include <stdio.h>
int main(){

    float L, M;
    printf("Digite o volume em metros cubicos: ");
    scanf("%f", &M);
    L = 1000 * M;
    printf("A conversão em litros = %.2f", L);
}