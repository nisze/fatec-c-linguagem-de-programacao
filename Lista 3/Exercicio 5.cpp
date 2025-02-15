/*5. Escreva um programa que leia uma matriz 6 x 10, some as colunas 
individualmente e acumule as somas na 7ª linha da matriz. O programa deverá 
mostrar o resultado de cada coluna*/
#include <stdio.h>
#include <locale.h>
int main() {
	int matriz[7][10];
	setlocale(LC_ALL,"Portuguese");
	for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 10; j++) {
            printf("\nEntre com um numero, [%d] linha, [%d] coluna: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
    	}
    }
	for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 6; i++) {
        	matriz[6][j] = 0;
        }
	}
    for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 6; i++) {
            matriz[6][j] += matriz[i][j];
        }
    }

    for (int j = 0; j < 10; j++) {
        printf("Soma da coluna %d: %d\n", j + 1, matriz[6][j]);
    }
	printf("Matriz final\n");
    for (int i = 0; i <7; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
	}
    return 0;
}