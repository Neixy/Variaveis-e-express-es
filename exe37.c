/*37. Faca um programa que leia o valor de um produto e imprima o valor com desconto, tendo
em vista que o desconto foi de 12%*/
#include<stdio.h>
int main(){

    float produto, desconto, precofinal;

    printf("Digite o valor do produto sem desconto: ");
    scanf("%f", &produto);

    desconto = (produto * 12) / 100;
    precofinal = produto - desconto;

    printf("Produto com desconto = R$ %.2f", precofinal);

}