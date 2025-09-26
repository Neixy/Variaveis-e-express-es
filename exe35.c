/*35. Sejam a e b os catetos de um triangulo, onde a hipotenusa e obtida pela equacao:
hipotenusa = raiz quadradada de a^2 + b^2. Fac¸a um programa que receba os valores de a e b e calcule
o valor da hipotenusa atraves da equacao. Imprima o resultado dessa operacao.*/
#include<stdio.h>
#include<math.h>
int main(){

    float a, b, c, hipotenusa;

    printf("Digite o valor dos catetos A e B para calcular a hipotenusa: ");
    scanf("%f %f", &a, &b);
    c = pow(a,2) + pow(b,2);
    hipotenusa = sqrt(c);
    printf("Valor da hipotenusa do triangulo = %.2f", hipotenusa);
}