/*8. Escreva um programa que leia uma matriz de ordem 2 x 6 de elementos inteiros, 
calcule e mostre na tela:
a) maior número da matriz;
b) soma dos números múltiplos de 3 da matriz;
c) média dos números da segunda linha (índice 1);
d) média dos números da matriz;
e) crie uma nova matriz que é o resultado da multiplicação de cada elemento da 
matriz pela média da matriz*/
#include <stdio.h>
#include <locale.h>
int main() {
	int matriz[2][6];
	float matriz_2[2][6];
	float media=0, media_2=0;
	int soma=0, maior, somamultiplo=0, soma_2=0;
	int indice_linha, indice_coluna;
	setlocale(LC_ALL,"Portuguese");
	for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            printf("\nEntre com um numero, [%d] linha, [%d] coluna: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            soma+=matriz[i][j];
            if ((i==0&&j==0)|| matriz[i][j]>maior ) {
                maior=matriz[i][j];
                indice_linha = i;
                indice_coluna = j;
            }
            if(matriz[i][j] % 3 ==0){
            	somamultiplo+=matriz[i][j];
			}	
    	}
    }
    for(int j=0; j<6; j++){
		soma_2+=matriz[1][j];
	}
	media = soma/12.00;
	media_2=soma_2/6.0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
        	matriz_2[i][j]=matriz[i][j]*media;
    	}
	}
	printf("\nMatriz original\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nA soma dos numeros multiplos de 3 da matriz e: %d", somamultiplo);
    printf("\nMedia dos numeros da matriz: %.2f", media);
    printf("\nMedia dos numeros da segunda linha (indice 1): %.2f", media_2);
    printf("\n\nMaior numero e: %d", maior);
	for(int i=0; i<5; i++){
		for (int j = 0; j < 6; j++) {
			if(matriz[i][j]==maior){
				indice_linha = i;
                indice_coluna = j;
				printf("\nlocalizado na linha [%d] e coluna [%d]",indice_linha+1, indice_coluna+1 );
			}
		}
	}
    printf("\n\nMatriz multiplicada pela media\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%.2f ", matriz_2[i][j]);
        }
        printf("\n");
    }
}