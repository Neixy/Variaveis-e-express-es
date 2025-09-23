/*6. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A formula de conversao e: F = C∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
e C a temperatura em Celsius.*/
#include <stdio.h>
int main(){

    float celsius, fahrenheit;
    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Graus celsius %.1f = %.1f fahrenheit", celsius, fahrenheit);

}