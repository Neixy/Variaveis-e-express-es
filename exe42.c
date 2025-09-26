/*42. Receba o salario-base de um funcionario. Calcule e imprima o salario a receber, sabendo-se
que esse funcionario tem uma gratificacao de 5% sobre o salario-base. Alem disso,
ele paga 7% de imposto sobre o salario-base.*/
#include<stdio.h>
int main(){

    float salariobase, gratificacao, imposto, salariofinal;

    printf("Digite o salario base do funcionario: ");
    scanf("%f", &salariobase);

    gratificacao = (salariobase * 5) / 100;
    imposto = (salariobase * 7) / 100;

    salariofinal = (salariobase + gratificacao) - imposto;

    printf("O funcionario deve receber R$%.2f", salariofinal);
    
}
