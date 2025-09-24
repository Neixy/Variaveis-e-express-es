/*33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua area*/
#include <stdio.h>
int main(){

    float T, A;
    printf("Digite o tamanho do lado de um quadrado: ");
    scanf("%f", &T);
    A = T * T;
    printf("A area do quadrado e = %.2f", A);

}