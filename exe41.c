/*41. Faca um programa que leia o valor da hora de trabalho (em reais) e numero de horas
trabalhadas no mes. Imprima o valor a ser pago ao funcionario, adicionando 10% sobre
o valor calculado.*/
#include<stdio.h>
int main(){

    float valorhora, qtdhoras, salario, adicional;

    printf("Digite o valor da hora trabalhada (em reais):\nDigite o nro de horas trabalhadas no mes:\n");
    scanf("%f %f", &valorhora, &qtdhoras);

    salario = valorhora * qtdhoras;
    adicional = (salario * 10) / 100;
    salario = salario + adicional;

    printf("Valor a ser pago: R$%.f", salario);
}