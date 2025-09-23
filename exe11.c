/*Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilometros por hora). A formula de conversao e: K = M ∗ 3.6, sendo K a velocidade
em km/h e M em m/s.*/
#include <stdio.h>
int main(){
    float K, M;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &M);
    K = M*3.6;
    printf("A velocidade %.2f m/s = %.2f km/h", M, K);
}