/*32. Leia um numero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.
 */
#include <stdio.h>  
int main(){
    int nro, triplo, dobro, soma;

    printf("Digite um nro: ");
    scanf("%d", &nro);
    
    soma = ((nro*3)+1) + ((nro*2)-1);

    printf("A soma do sucessor de seu triplo com o antecessor de seu dobro = %d", soma);

}