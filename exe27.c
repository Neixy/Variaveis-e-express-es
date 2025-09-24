/*27. Leia um valor de area em hectares e apresente-o convertido em metros quadrados m2.
A formula de conversao e: M = H ∗ 10000, sendo M a area em metros quadrados e H
a area em hectares.*/
#include <stdio.h>
int main(){

    float H, M;
    printf("Digite o valor em hectares: ");
    scanf("%f", &H);
    M = H * 100000;
    printf("O valor em metros quadrados = %.2f ", M);
}