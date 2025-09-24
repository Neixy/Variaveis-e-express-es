/*23. Leia um valor de comprimento em metros e apresente-o convertido em jardas. A formula
de conversao e: J = M / 0,91 , sendo J o comprimento em jardas e M o comprimento em metros.*/
#include <stdio.h>
int main(){

    float J, M;
    printf("Digite o comprimento em metros: ");
    scanf("%f", &M);
    J = M / 0.91;
    printf("Comprimento em jardas = %.2f", J);
}