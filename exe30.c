/*30. Leia um valor em real e a cotacao do dolar. Em seguida, imprima o valor correspondente em dolares.*/
#include <stdio.h>
int main(){

    float real, dolar, cotacao;

    printf("Digite os reais $$: ");
    scanf("%f", &real);
    printf("Digite o valor da cotacao: ");
    scanf("%f", &cotacao);
    dolar = real / cotacao;
    printf("Vc tem USD$%.2f", dolar);
}