/*1.Escreva um programa que leia uma matriz de ordem 3 x 5 de elementos inteiros, calculee mostre na tela:
a) menornúmero da matriz;
b) soma dos números múltiplos de 3 da matriz;
c) maior número da 3ª coluna da matriz (índice 2);
d) média dosnúmeros da matriz;*/
 
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese");
	int matriz[3][5];
	int menor,maior,soma=0, somatotal=0, qtd;
	float media;
	int indice_linha, indice_coluna;
	for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("\nEntre com um numero, [%d] linha, [%d] coluna: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            somatotal+=matriz[i][j];
            qtd++;
            if ((i==0&&j==0)|| matriz[i][j]<menor ) {
                menor=matriz[i][j];
                indice_linha = i;
                indice_coluna = j;
            }
            if(matriz[i][j] % 3 ==0){
            	soma+=matriz[i][j];
			}	
        }
    }
    maior=matriz[0][2];
    
    for(int i=1; i<3; i++){
		if(matriz[i][2]>maior){
			maior=matriz[i][2];
		}
	}
     printf("Matriz original\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    media=somatotal/15;
    printf("\nmenor numero da matriz e: %d", menor);
    printf("\nsoma dos numeros mUltiplos de 3 da matriz e: %d", soma);
    printf("\nmaior numero da 3ª coluna da matriz (Undice 2) e: %d", maior);
    printf("\nmEdia dosnumeros da matriz e: %.2f", media);
    return 0;
}