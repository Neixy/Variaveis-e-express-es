/*12. Leia uma distancia em milhas e apresente-a convertida em quilometros. A formula de 
conversao e: K = 1,61 ∗ M, sendo K a distancia em quil ometros e M em milhas.*/
#include <stdio.h>
int main(){

    float milhas, km;
    printf("Digite a distancia em milhas: ");
    scanf("%f", &milhas);
    km = 1.61 * milhas;
    printf("Distancia %.2f milhas = %.2f quilometros", milhas, km);
}