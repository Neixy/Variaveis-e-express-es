/*34. Leia o valor do raio de um cırculo e calcule e imprima a area do cırculo correspondente.
A area do cırculo e π ∗ (raio * raio), considere π = 3.141592.*/
#include <stdio.h>
int main(){

    double raio, area;

    printf("Digite o valor do raio de um circulo: ");
    scanf("%lf", &raio);
    area = (raio * raio) * 3.141592;
    printf("A area do circulo = %.6lf", area);
}