/*4. Leia um numero real e imprima o resultado do quadrado desse numero.*/
#include <stdio.h>
int main(){

    float nro, quadrado;

    printf("Digite um nro para calcular seu quadrado: ");
    scanf("%f", &nro);
    quadrado = nro * nro;
    printf("Quadrado de %f = %.2f", nro, quadrado);
}