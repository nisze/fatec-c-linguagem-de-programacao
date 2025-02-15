/* 5) Escreva um programa que preencha uma matriz 5 x 4, com as notas de 5 alunos.
Preencha também um vetor com os nomes dos alunos.
a) Crie uma função que receba a matriz e o vetor como parâmetro, calcule a média de
cada aluno e armazene no vetor.
b) Crie uma função que receba o vetor como parâmetro e imprima a média de cada
aluno.
c) Crie uma função que receba a matriz como parâmetro e faça a impressão da
matriz.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calcula_medias(float notas[5][4], float medias[5]) {
    for (int i = 0; i < 5; i++) {
        float soma = 0;
        for (int j = 0; j < 4; j++) {
            soma += notas[i][j];
        }
        medias[i] = soma / 4;
    }
}

void imprime_medias(char nomes[5][50], float medias[5]) {
    for (int i = 0; i < 5; i++) {
        printf("A media de %s e: %.2f\n", nomes[i], medias[i]);
    }
}

void imprime_matriz(float notas[5][4]) {
    printf("Matriz de notas:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%.2f ", notas[i][j]);
        }
        printf("\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float notas[5][4];
    char nomes[5][50];
    float medias[5];

    printf("Digite os nomes dos alunos e suas 4 notas:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);
        for (int j = 0; j < 4; j++) {
            printf("Nota %d de %s: ", j + 1, nomes[i]);
            scanf("%f", &notas[i][j]);
        }
    }

    calcula_medias(notas, medias);
    imprime_matriz(notas);
    imprime_medias(nomes, medias);

    return 0;
}
