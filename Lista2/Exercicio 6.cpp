#include <stdio.h>
#include <string.h>
/*6) Escreva um programa que leia o nome e o peso de 10 pessoas
e armazene-as em vetores.
Calcule e mostre:
a) o menor peso e o nome da pessoa
b) a média dos pesos
c) Mostre na tela um relatório com o nome e peso das pessoas cujo peso é inferior a média*/

int main(){
	char nome[10][50];
	float peso[10];
	float menor, soma,media;
	int idx;
	
	printf("Digite o nome e o peso de 10 pessoas:\n");
	for (int i=0; i<10;i++){
		printf("\nDigite o %d nome: ", i+1);
		gets(nome[i]);
		printf("Digite o %d peso: ", i+1);
		scanf("%f", &peso[i]);
		fflush(stdin);
		soma+=peso[i];
		if(i==0||peso[i]<menor){
			menor=peso[i];
			idx=i;
		}
	}
	media=soma/10;
	printf("\nO menor peso e: %.3f e o nome da pessoa e: %s \n", menor, nome[idx]);
	printf("A media do peso das pessoas e: %.3f\n", media);
	printf("\nRelatorio das pessoas com peso inferior a media e: ");
	for(int i=0;i<10;i++){
		if(peso[i]<media){
			printf("\n%s - %.3f kg", nome[i], peso[i]);
		}
	}
}