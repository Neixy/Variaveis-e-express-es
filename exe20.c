/*20. Leia um valor de massa em quilogramas e apresente-o convertido em libras. A formula ´
de conversao e: L = K / 0,45 , sendo K a massa em quilogramas e L a massa em libras.*/
#include <stdio.h>
int main(){

    float L, K;
    printf("Digite o valor da marra em quilogramas: ");
    scanf("%f", &K);
    L = K / 0.45;
    printf("Valor em libras = %.2f", L);
}