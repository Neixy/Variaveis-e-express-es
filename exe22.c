/*22. Leia um valor de comprimento em jardas e apresente-o convertido em metros. A formula
de conversao e: M = 0, 91 ∗ J, sendo J o comprimento em jardas e M o comprimento
em metros.*/
#include <stdio.h>
int main(){

    float J, M;
    printf("Digite o comprimento em jardas: ");
    scanf("%f", &J);
    M = 0.91 * J;
    printf("Comprimento em metros = %.2f", M);
}