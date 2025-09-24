/*Leia um valor de volume em litros e apresente-o convertido em metros cubicos m3 .
A formula de conversao e: M = L / 1000 , sendo L o volume em litros e M o volume em metros
cubicos.*/
#include <stdio.h>
int main(){

    float L, M;
    printf("Digite o volume em litros: ");
    scanf("%f", &L);
    M = L / 1000;
    printf("A conversão em metros cubicos = %.2f", M);
}