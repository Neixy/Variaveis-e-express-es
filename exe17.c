/*17. Leia um valor de comprimento em centımetros e apresente-o convertido em polegadas.
A formula de conversao e: P = C / 2,54 , sendo C o comprimento em centımetros e P o
comprimento em polegadas.*/
#include <stdio.h>
int main (){

    float C, P;
    printf("Digite o comprimento em centimetros: ");
    scanf("%f", &C);
    P = C / 2.54;
    printf("Comprimento em polegadas: %.2f", P);
}