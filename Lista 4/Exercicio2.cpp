/* 2) Escreva um programa que leia uma matriz de ordem 3 x 5 de elementos inteiros.
Faça os seguintes cálculos:
a) Crie uma função que receba a matriz como parâmetro e retorne o menor número da matriz;
b) Crie uma função que receba a matriz e retorne a soma dos números múltiplos de 3 da matriz;
c) Crie uma função que receba a matriz e retorne o maior número da 3ª coluna da matriz. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int menor_numero(int matriz[3][5]) {
    int menor = matriz[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }
    return menor;
}

int somamult3(int matriz[3][5]) {
    int soma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] % 3 == 0) {
                soma += matriz[i][j];
            }
        }
    }
    return soma;
}

int maiorterceira(int matriz[3][5]) {
    int maior = matriz[0][2];
    for (int i = 1; i < 3; i++) {
        if (matriz[i][2] > maior) {
            maior = matriz[i][2];
        }
    }
    return maior;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[3][5];

    printf("Digite os elementos da matriz 3x5:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
	printf("Matriz original\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("O menor numero da matriz e: %d\n", menor_numero(matriz));
    printf("A soma dos numeros multiplos de 3 da matriz e: %d\n", somamult3(matriz));
    printf("O maior numero da 3 coluna da matriz e: %d\n", maiorterceira(matriz));

    return 0;
}

