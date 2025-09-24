/*25. Leia um valor de area em acres e apresente-o convertido em metros quadrados m2. A
formula de conversao e: M = A ∗ 4048, 58, sendo M a area em metros quadrados e A a area em acres.*/
#include <stdio.h>
int main() {
    float M, A;
    printf("Digite o valor da acres: ");
    scanf("%f", &A);
    M = A * 4048.58;
    printf("O valor em metros quadrados = %f", M);

}