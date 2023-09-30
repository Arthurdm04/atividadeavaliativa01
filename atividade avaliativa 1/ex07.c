#include <stdio.h>

int main() {
    /*
    Faça um algoritmo que leia as três notas de 30 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: MP = ( n1*2 + n2*4 + n3*4 ) / 10

Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem "Aprovado", caso a média seja maior ou igual a sete, e uma mensagem "Reprovado", caso contrário. Ao final, mostre a média geral.
    */

    int numAlunos = 30;
    float notas[numAlunos][3];
    float medias[numAlunos];
    float mediaGeral = 0.0;

 
    for (int i = 0; i < numAlunos; i++) {
        printf("Digite as notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%f %f %f", &notas[i][0], &notas[i][1], &notas[i][2]);

     
        medias[i] = (notas[i][0] * 2 + notas[i][1] * 4 + notas[i][2] * 4) / 10.0;

      
        mediaGeral += medias[i];
    }

   
    mediaGeral /= numAlunos;

    
    for (int i = 0; i < numAlunos; i++) {
        printf("Aluno %d - Média: %.2f - ", i + 1, medias[i]);
        
        if (medias[i] >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }


    printf("Media Geral da Turma: %.2f\n", mediaGeral);

}
