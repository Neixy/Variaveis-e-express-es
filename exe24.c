/*24. Leia um valor de area em metros quadrados m2 e apresente-o convertido em acres. A
formula de conversao e: A = M ∗ 0, 000247, sendo M a area em metros quadrados e A a area em acres.*/
#include <stdio.h>
int main() {
    float M, A;
    printf("Digite o valor da area em metros quadrados: ");
    scanf("%f", &M);
    A = M * 0.000247;
    printf("O valor em acres = %f", A);

}