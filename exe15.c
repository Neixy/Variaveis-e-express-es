/*15. Leia um angulo em radianos e apresente-o convertido em graus. A formula de conversao
e: G = R ∗ 180/π, sendo G o angulo em graus e R em radianos e π = 3.14.*/
#include<stdio.h>
int main(){
    float G, R;

    printf("Digite o angulo em radianos: ");
    scanf("%f", &R);
    G = (180/3.14) * R;
    printf("Angulo em graus: %f", G);
}