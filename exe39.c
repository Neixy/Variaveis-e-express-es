/*39. A importancia de R$ 780.000,00 sera dividida entre tres ganhadores de um concurso.
Sendo que da quantia total:
 O primeiro ganhador recebera 46%;
 O segundo recebera 32%;
 O terceiro recebera o restante (22%);
 Calcule e imprima a quantia ganha por cada um dos ganhadores.*/
 #include<stdio.h>
 int main (){

    float primeiro, segundo, terceiro;

    primeiro = (780000 * 46) / 100;
    segundo = (780000 * 32) / 100;
    terceiro = (780000 * 22) / 100;

    printf("O primeiro ganhador recebera R$%.2f\nO segundo ganhador recebera R$%.2f\nO terceiro ganhador recebera R$%.2f", primeiro, segundo, terceiro);
 }