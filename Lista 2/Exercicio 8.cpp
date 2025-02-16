#include <stdio.h>
#include <string.h>
/* 8) Faça um Programa que leia 2 vetores com 10 números cada. Gere um terceiro vetor com 
20 números, cujos valores deverão ser compostos pelos números intercalados dos 2 
vetores, mostre os 3 vetores na tela. */
int main(){
	int vetora[10];
	int vetorb[10];
	int vetorc[20];
	printf("Digite os 10 numeros do primeiro vetor: \n");
	for(int i=0; i<10; i++){
		printf("Numero %d: ", i+1);
		scanf("%d", &vetora[i]);
	}
	printf("Digite os 10 numeros do segundo vetor: \n");
	for(int i=0; i<10; i++){
		printf("Numero %d: ", i+1);
		scanf("%d", &vetorb[i]);
	}
	for(int i=0; i<10; i++){
		vetorc[i*2]= vetora[i];
		vetorc[(i*2)+1]=vetorb[i];
	}
	printf("Primeiro vetor: ");
	for(int i=0; i<10; i++){
		printf("%d, ", vetora[i]);
	}
	printf("\nSegundo vetor: ");
	for(int i=0; i<10; i++){
		printf("%d, ", vetorb[i]);
	}
	printf("\nTerceiro vetor: ");
	for(int i=0; i<20; i++){
		printf("%d, ", vetorc[i]);
	}
}