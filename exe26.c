/*26. Leia um valor de area em metros quadrados m2 e apresente-o convertido em hectares.
A formula de conversao e: H = M ∗ 0, 0001, sendo M a area em metros quadrados e H a area em hectares.*/
#include <stdio.h>
int main(){

    float H, M;
    printf("Digite o valor em metros quadrados: ");
    scanf("%f", &M);
    H = M * 0.0001;
    printf("O valor em hectares = %.2f ", H);
}