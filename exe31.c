/*31. Leia um numero inteiro e imprima o seu antecessor e o seu sucessor.*/
#include <stdio.h>
int main(){

    int ant, agr, suc;

    printf("Digite um nro: ");
    scanf("%d", &agr);
    printf("Antecessor: %d\nSucessor: %d", agr-1, agr+1);
}