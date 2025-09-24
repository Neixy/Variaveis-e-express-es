/*21. Leia um valor de massa em libras e apresente-o convertido em quilogramas. A formula
de conversao e: K = L∗ 0, 45, sendo K a massa em quilogramas e L a massa em libras.*/
#include <stdio.h>
int main(){

    float L, K;
    printf("Digite o valor da marra em libras: ");
    scanf("%f", &L);
    K = L * 0.45;
    printf("Valor em libras = %.2f", K);
}