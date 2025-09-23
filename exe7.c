/*Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
A formula de conversao e: C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius
e F a temperatura em Fahrenheit.*/
#include <stdio.h>
int main(){

    float celsius, fahrenheit;
    printf("Digite a temperatura em graus fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = 5 * (fahrenheit - 32) / 9;
    printf("Graus fahrenheit %.1f = %.1f celsius", fahrenheit, celsius);

}