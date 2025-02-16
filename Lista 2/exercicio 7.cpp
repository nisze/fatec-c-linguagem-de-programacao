#include <stdio.h>
#include <string.h>
/* 7) Faça um programa que receba dez números inteiros e armazene em um vetor. 
Calcule e mostre:
• A soma dos números primos
• A média dos números múltiplos de 3
• A quantidade de números ímpares e maiores que 10 */
int main(){
	int n[5];
	int soma3=0, soma=0, qtmaior=0,primo;
	float media, qt3=0;
	printf("Digite 5 numeros inteiros: \n");
	for(int i=0;i<5;i++){
		primo=0;
		printf("\nnumero %d: ",i+1);
		scanf("%d", &n[i]);
		if(n[i]>1){
			for(int j=1;j<=n[i];j++){
				if(n[i]%j==0){
					primo++;
				}
			}
			if(primo==2){
				soma+=n[i];
			}
		}
		if(n[i]%3==0){
			qt3++;
			soma3+=n[i];
		}
		if(n[i]%2==1&&n[i]>10){
			qtmaior++;
		}
	}
	if(qt3>0){
		media=soma3/qt3;
		printf("A media dos numeros multiplos de 3 e: %.2f\n", media);
	}
	else{
		printf("Nao ha multiplos de 3!\n");
	}
	if(soma>0){
		printf("A soma dos numeros primos e: %d\n", soma);
	}
	else{
		printf("Nao ha numeros primos!\n");
	}
	if(qtmaior>0){
		printf("A quantidade dos numeros maiores que 10 e impares e: %d\n", qtmaior);	
	}
	else{
		printf("Nao ha numeros maiores que 10 que sao impares\n");
	}
}