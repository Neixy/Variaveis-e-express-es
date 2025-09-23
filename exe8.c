/*8. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
formula de conversao e: C = K − 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.*/
#include <stdio.h>
int main(){

    float kelvin, celsius;
    printf("Digite a temperatura em kelvin: ");
    scanf("%f", &kelvin);
    celsius = kelvin - 273.15;
    printf("A temperatura em kelvin %.2f = %.2f celsius", kelvin, celsius);
}