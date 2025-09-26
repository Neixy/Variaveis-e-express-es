/*36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
de um cilindro circular e calculado por meio da seguinte formula: V = pi * raio^2 * altura,
onde pi = 3:141592.*/
#include <stdio.h>
#include <math.h>
int main()
{

    float altura, raio, volume;

    printf("Digite a altura e o raio do cilindro: ");
    scanf("%f %f", &altura, &raio);
    volume = 3.141592 * pow(raio, 2) * altura;
    printf("O volume do cilindro = %f", volume);
}