/*2. Escreva um programa que preencha uma matriz 4 x 6 com números inteiros, 
calcule e mostre na tela:
a) A quantidade de números que estão no intervalo entre 10 e 30
b) A soma dos números maiores que 10 e pares
c) A soma dos números que estão na quarta coluna da matriz
d) A média dos números da matriz que estão na terceira linha*/
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese");
	int matriz[4][6];
	int somapar=0,qtd=0,somacol=0, somatotal=0;
	float media;
	int indice_linha, indice_coluna;
	for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
        	printf("\nEntre com um numero, [%d] linha, [%d] coluna: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        	if(matriz[i][j] % 2 == 0 && matriz[i][j]>10){
        		somapar+=matriz[i][j];
			}
			if(matriz[i][j]>=10 && matriz[i][j]<=30){
				qtd++;
			}
		}
	}
	for(int i=0; i<4; i++){
			somacol+=matriz[i][3];
	}
	for(int j=0; j<6; j++){
			somatotal+=matriz[2][j];
	}
	printf("Matriz original\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
	media=somatotal/6.0;
	printf("\nA quantidade de numeros que estao no intervalo entre 10 e 30 e: %d", qtd);
    printf("\nA soma dos numeros maiores que 10 e pares e : %d", somapar);
    printf("\nA soma dos numeros que estao na quarta coluna da matriz e: %d", somacol);
    printf("\nA media dos numeros da matriz que estao na terceira linha e: %.2f", media);
}