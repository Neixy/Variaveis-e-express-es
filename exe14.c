/*14. Leia um angulo em graus e apresente-o convertido em radianos. A formula de conversao
e: R = G ∗ π/180, sendo G o angulo em graus e R em radianos e π = 3.14.*/
#include<stdio.h>
int main(){
    float G, R;

    printf("Digite o angulo em graus: ");
    scanf("%f", &G);
    R = (3.14/180) * G;
    printf("Angulo em radianos: %f", R);
}