/*44. Receba a altura do degrau de uma escada e a altura que o usuario deseja alcancar
subindo a escada. Calcule e mostre quantos degraus o usuario devera 
subir para atingir seu objetivo.*/
#include<stdio.h>
int main(){

    float altura, alcancar, subir;

    printf("Digite a altura dos degraus: ");
    printf("Digite a altura que o usuario deseja alcancar: ");
    scanf("%f %f", &altura, &alcancar);

    subir = alcancar / altura;

    printf("O usuario precisa subir %.0f", subir);

}