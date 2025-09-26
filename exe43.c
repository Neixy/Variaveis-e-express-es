/*43. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
 o total a pagar com desconto de 10%;
 o valor de cada parcela, no parcelamento de 3x sem juros;
 a comissao do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
 a comissao do vendedor, no caso da venda ser parcelada (5% sobre o valor total)*/
 #include <stdio.h>
 int main (){

    float produto, desconto, avista, parcelado, comissaoa, comissaop;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);
    
    desconto = (produto * 10) / 100;
    avista = produto - desconto;

    parcelado = produto / 3;

    comissaoa = (avista * 5) / 100;

    comissaop = (produto * 5) / 100;
    
    printf("Pagamento a vista R$%.2f\n", avista);
    printf("Pagamento parcelado, 3x de R$%.2f\n", parcelado);
    printf("Comissao por valor a vista = R$%.2f\n", comissaoa);
    printf("Comissao por valor parcelado = R$%.2f", comissaop);


 }