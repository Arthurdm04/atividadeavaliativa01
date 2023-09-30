#include<stdio.h>

int main(){
/*
Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for classificá-los (imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, Triângulo Obtusângulo > 90º, Triângulo Acutângulo < 90º)
*/

double A, B, C;

printf("Digite o valor de A:");
scanf("%lf", &A);

printf("Digite o valor de B:");
scanf("%lf", &B);

printf("Digite o valor de C:");
scanf("%lf", &C);

if(A + B > C && A + C > B && B + C > A){

double Asquared = A * A;
double Bsquared = B * B;
double Csquared = C * C;

if(Asquared + Bsquared == Csquared ||
    Asquared + Csquared == Bsquared ||
    Bsquared + Csquared == Asquared){
        printf("Triangulo retangulo\n");

    } else if (Asquared + Bsquared > Csquared ||
                Asquared + Csquared > Bsquared ||
                Bsquared + Csquared > Asquared){
                    printf("Triangulo acutangulo\n");
                
                } else{
                    printf("Triangulo obtusangulo\n");
                }
} else {
    printf("Nao e possivel formar um triangulo com esses valores\n");
}


}



