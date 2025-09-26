/*40. Uma empresa contrata um encanador a R$ 30,00 por dia. Faca um programa que solicite
o numero de dias trabalhados pelo encanador e imprima a quantia lıquida que dever a ser
paga, sabendo-se que sao descontados 8% para imposto de renda.*/
#include<stdio.h>
int main(){

    float dias, bruto, desconto, liquido;

    printf("Digite a quantidade de dias trabalhados pelo encanador: ");
    scanf("%f", &dias);
    bruto = dias * 30;
    desconto = (bruto * 8) / 100;
    liquido = bruto - desconto;
    printf("Valor liquido a ser pago: R$%.2f", liquido);

    
    
}