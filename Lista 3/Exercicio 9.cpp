/*9. Escreva um programa que lê uma matriz 4 x 4. A seguir, troque os elementos da 
primeira coluna com os elementos da segunda coluna, os da terceira coluna com 
a quarta coluna. Imprima na tela a matriz original e a nova matriz*/
#include <stdio.h>
#include <locale.h>
int main() {
	int matriz[4][4];
	int matriz_2[4][4];
	setlocale(LC_ALL,"Portuguese");
	for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("\nEntre com um numero, [%d] linha, [%d] coluna: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            matriz_2[i][j]=matriz[i][j];
    	}
	}
	for(int i=0; i<4;i++){
		matriz_2[i][0]=matriz[i][1];
		matriz_2[i][1]=matriz[i][0];
		matriz_2[i][2]=matriz[i][3];
		matriz_2[i][3]=matriz[i][2];
	}
	printf("Matriz original\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Matriz trocada\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz_2[i][j]);
        }
        printf("\n");
    }
}
