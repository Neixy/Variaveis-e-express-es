/*Leia uma velocidade em km/h (quilometros por hora) e apresente-a convertida em m/s
(metros por segundo). A formula de conversao e: M = K/3.6, sendo K a velocidade em
km/h e M em m/s.*/
#include <stdio.h>
int main(){
    float K, M;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &K);
    M = K/3.6;
    printf("A velocidade %.2f km/h = %.2f m/s", K, M);
}