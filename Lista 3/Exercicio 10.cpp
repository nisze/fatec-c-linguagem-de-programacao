/*10. Crie um programa que preencha uma matriz 4 x 4, coloque os números 
armazenados nessa matriz em ordem crescente e depois mostre na tela a matriz 
inicial e a matriz ordenada*/
#include <stdio.h>
#include <locale.h>
int main() {
	int matriz[4][4] = {0};
	int matriz_2[4][4] = {0};
	int vet[16];
	int v=0, indice=0;
	setlocale(LC_ALL,"Portuguese");
	for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("\nEntre com um numero, [%d] linha, [%d] coluna: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            vet[v]=matriz[i][j];
            v++;
    	}
	}
	for(int i=0; i<16; i++){
		for(int j = i+1; j<16; j++){
			if(vet[i]>vet[j]){
				indice=vet[i];
				vet[i]=vet[j];
				vet[j]=indice;
			}
		}
	}
	printf("Matriz original\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    v=0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
        	matriz_2[i][j]= vet[v];
        	v++;
        }
    }
   	printf("Matriz ordenada\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz_2[i][j]);
        }
        printf("\n");
	}
	return 0;
}