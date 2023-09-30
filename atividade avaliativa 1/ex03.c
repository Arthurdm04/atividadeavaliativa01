#include<stdio.h>
#include<math.h>

int main(){
/*
Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles.
*/

double A, B, C;

printf("Digite o valor de A:");
scanf("%lf", &A);

printf("Digite o valor de B:");
scanf("%lf", &B);

printf("Digite o valor de C:");
scanf("%lf", &C);

if (A + B > C && A + C > B && B + C > A){
if (A == B && B == C){
printf("E um triangulo equilatero.\n");
} else if(A == B || A == C || B == C){
    printf("E um triangulo isoceles.\n");

} else {
    printf("E um triangulo escaleno.\n");
}
}else {
    printf("Nao e possivel formar um triangulo com esss valores.\n");
}


}




