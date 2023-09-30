#include<stdio.h>

int main(){
/*
A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:  

a) média do salário da população;

b) média do número de filhos;

c) maior salário;

d) percentual de pessoas com salário até R$100,00.

O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando do - while) .
*/

    float salario, mediaSalario = 0, mediaFilhos = 0, maiorSalario = 0;
    int numeroFilhos, totalPessoas = 0, pessoasAte100 = 0;

    do {
       
        printf("Digite o salario (ou um valor negativo para encerrar): ");
        scanf("%f", &salario);

        
        if (salario < 0) {
            break;
        }

        
        printf("Digite o numero de filhos: ");
        scanf("%d", &numeroFilhos);

       
        mediaSalario += salario;

        
        mediaFilhos += numeroFilhos;

        
        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

      
        if (salario <= 100.0) {
            pessoasAte100++;
        }

       
        totalPessoas++;

    } while (1);

    if (totalPessoas > 0) {
        
        mediaSalario /= totalPessoas;
        mediaFilhos /= totalPessoas;

       
        float percentualAte100 = (float)pessoasAte100 / totalPessoas * 100;

        
        printf("a) Media do salario da população: %.2f\n", mediaSalario);
        printf("b) Media do numero de filhos: %.2f\n", mediaFilhos);
        printf("c) Maior salario: %.2f\n", maiorSalario);
        printf("d) Percentual de pessoas com salario ate R$100,00: %.2f%%\n", percentualAte100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

}


