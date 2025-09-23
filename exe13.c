/*13. Leia uma distancia em quilometros e apresente-a convertida em milhas. A formula de
conversaoe: M = K / 1,61 , sendo K a distancia em quilometros e  M em milhas.*/
#include <stdio.h>
int main(){

    float milhas, km;
    printf("Digite a distancia em quilometros: ");
    scanf("%f", &km);
    milhas = km / 1.61;
    printf("Distancia %.2f quilometros = %.2f milhas", km, milhas);
}
