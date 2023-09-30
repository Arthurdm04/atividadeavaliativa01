#include<stdio.h>
#include<math.h>

int main(){
/*
Criar um algoritmo que receba o valor de x, e calcule e imprima o valor de f(x). 

*/

float x, fx;

printf("Digite o valor de x:");
scanf("%f", &x);

fx = ((5 * x) + 3) / (sqrt (pow(x , 2) - 16));

printf("O resultado e: %.2f", fx);



}