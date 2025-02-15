/*3. Escreva um programa que leia uma matriz de ordem 5 x 3, que armazene os 
valores de vendas de 3 meses de 5 vendedores. Preencha também um vetor com 
os nomes dos 5 vendedores. Calcule e mostre na tela:
a) O valor total vendido por vendedor (mês 1 + 2 + 3)
b) A maior venda do mês 1
c) A menor venda do mês 3
d) O total vendido por mês de todos os vendedores*/
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese");
	int matriz[5][3];
	char vendedor[5][50];
	int maior, menor,somacol=0, somat=0;
	int total_vendedor[5]={0};
	int total[3] = {0};
	int indice_linha, indice_coluna;
	for (int i = 0; i < 5; i++) {
		printf("\nDigite o nome do %d vendedor: ", i + 1);
		scanf("%s", vendedor[i]);
        for (int j = 0; j < 3; j++) {
        	printf("\nEntre com a venda do, [%d] vendedor, no mes [%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            total[j] += matriz[i][j];
		}
	}
	maior=matriz[0][0];
    for(int i=0; i<5; i++){
		if(matriz[i][0]>maior){
			maior=matriz[i][0];
			indice_linha=i;
		}
	}
	menor=matriz[0][2];
	for(int i=0; i<5; i++){
		if(matriz[i][2]<menor){
			menor=matriz[i][2];
			indice_coluna=i;
		}
	}
	printf("\nVendas por vendedor:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            total_vendedor[i] += matriz[i][j];
        }
        printf("\nVendedor: %s, Total vendido: %d", vendedor[i], total_vendedor[i]);
        
    }
    printf("\n\nMaior venda do mes 1: %d", maior);
	for(int i=0; i<5; i++){
		if(matriz[i][0]==maior){
			printf("\nVendedor: %s", vendedor[i]);
		}
	}
	printf("\n\nMenor venda do mes 3: %d", menor);
	for(int i=0; i<5; i++){
		if(matriz[i][2]==menor){
			printf("\nVendedor: %s", vendedor[i]);
		}
	}
    printf("\nTotal vendido por mes:\n");
    for (int i = 0; i < 3; i++) {
        printf("Mes %d: %d\n", i + 1, total[i]);
    }
    return 0;
}