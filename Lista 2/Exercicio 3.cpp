#include <stdio.h>
#include <string.h>
/* 3) Faça um programa que preencha dois vetores, A e B com 5 números em cada. Gere o
vetor C, com os números do vetor A e B. Depois calcule e mostre na tela a quantidade de
números perfeitos. Um número é perfeito quando ele é igual a soma dos seus divisores
exceto ele próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). */
int main(){
	int vetora[5];
	int vetorb[5];
	int vetorc[10];
	int i,j,qt,soma;
	
	printf("Digite 5 numeros para o primeiro vetor:\n\n");
	for(i=0; i<5; i++){
		printf("numero %d: ", i+1);
		scanf("%d", &vetora[i]);
	}
	printf("\nDigite 5 numeros para o segundo vetor:\n\n");
	for(i=0; i<5; i++){
		printf("numero %d: ", i+1);
		scanf("%d", &vetorb[i]);
	}
	for(i=0; i<5; i++){
		vetorc[i]=vetora[i];
		vetorc[i+5]=vetorb[i];
	}
	for(i=0; i<10; i++){
		soma=0;
		for(j=1;j<vetorc[i];j++){
			if(vetorc[i]%j == 0){
				soma += j;
			}
		}
		if(soma==vetorc[i]){
			qt++;
			printf("%d e um numero perfeito \n", vetorc[i]);
		}
	}
	printf("A quantidade de numeros perfeitos e: %d \n", qt);
	return 0;
}

