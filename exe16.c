/*16. Leia um valor de comprimento em polegadas e apresente-o convertido em centımetros.
A formula de conversao e: C = P ∗ 2, 54, sendo C o comprimento em centımetros e P o
comprimento em polegadas.*/
#include <stdio.h>
int main (){

    float C, P;
    printf("Digite o comprimento em polegadas: ");
    scanf("%f", &P);
    C = P * 2.54;
    printf("Comprimento em centimetros: %.2f", C);
}