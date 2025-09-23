/*Leia um numero real e imprima a quinta parte deste numero. */
#include <stdio.h>
int main(){

    float nro, quinta;

    printf("Digite o nro o qual deseja saber o valor da quinta parte: ");
    scanf("%f", &nro);
    quinta = nro / 5;
    printf("A quinta parte de %f = %f", nro, quinta);
}