/*Leia o salario de um funcionario. Calcule e imprima o valor do novo salario, sabendo que
ele recebeu um aumento de 25%.*/
#include<stdio.h>
int main(){

    float salario, aumento;

    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salario);
    aumento = (salario * 25) / 100;
    salario = salario + aumento;
    printf("Com o aumento o salario fica R$%.2f", salario);

}