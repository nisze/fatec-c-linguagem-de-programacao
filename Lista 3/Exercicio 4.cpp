/* 4. Escreva um programa que preencha uma matriz 4 x 3 com números inteiros, 
calcule e mostre na tela:
a) A soma dos elementos que estão na 2ª e 4ª linha da matriz
b) A soma dos números primos
c) A média dos números da matriz
d) O maior número da matriz */
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese");
	int matriz[4][3];
	int maior,somap=0, somalinha=0, somatotal=0 , qtd, primo;
	float media=0;
	int indice_linha, indice_coluna;
	for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
        	printf("\nEntre com um numero, [%d] linha, [%d] coluna: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            somatotal+=matriz[i][j];
            if (i == 1 || i == 3) {
                somalinha += matriz[i][j];
            }
            if ((i==0&&j==0)|| matriz[i][j]>maior ) {
                maior=matriz[i][j];
                indice_linha = i+1;
                indice_coluna = j+1;
       		}
    		primo=0;
       		if(matriz[i][j]>1){
				for(int l=1;l<=matriz[i][j];l++){
					if(matriz[i][j]%l==0){
						primo++;
					}
				}
				if(primo==2){
					somap+=matriz[i][j];
				}
			}
		}
	}
	media = somatotal /12.0;
	printf("Matriz original\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <3 ; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nSoma dos elementos da 2 e 4 linha: %d", somalinha);
    printf("\nSoma dos numeros primos: %d", somap);
    printf("\nMedia dos numeros da matriz: %.2f", media);
    printf("\nMaior numero da matriz: %d, localizado na linha [%d] e coluna [%d]", maior, indice_linha, indice_coluna);

    return 0;
}
