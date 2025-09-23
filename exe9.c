/*9. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
formula de conversao e: K = C + 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.*/
#include <stdio.h>
int main(){

    float kelvin, celsius;
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15;
    printf("A temperatura em celsius %.2f = %.2f kelvin", celsius, kelvin);
}