#include <stdio.h>
#include <string.h>
/* 4) Faça um programa que preencha um vetor com os nomes de 5 produtos, e outro vetor com 
o valor dos produtos. Calcule e mostre:
a. a quantidade de produtos que o valor é abaixo de 10 reais;
b. a média dos valores dos produtos;
c. a quantidade de produtos que valor acima da média;
d. a maior valor e o nome do produto;
e. faça uma listagem que imprima na tela (Nome Vlr do produto) */
int main(){
	char nome[5][30];
	float valor[5];
	int qt10, qtacima=0, caro;
	float soma=0, media, maior=0;
	
	printf("Digite os nomes e os valores dos 5 produtos: \n");
	for(int i = 0; i<5; i++){
		printf("\nProduto %d: ", i+1);
		gets(nome[i]);
		printf("Valor do %d produto: ", i+1);
		scanf("%f", &valor[i]);
		fflush(stdin);
		soma += valor[i];
		if(valor[i]<10){
			qt10++;
		}
		if(valor[i]>maior){
			maior=valor[i];
			caro=i;
		}
	}
	media=soma/5;
	for(int i=0; i<5; i++){
		if(valor[i]>media){
			qtacima++;
		}
	}
	printf("\na quantidade de produtos que o valor e abaixo de 10 reais e: %d\n", qt10);
	printf("a media dos valores dos produtos e: %.2f\n", media);
	printf("a quantidade de produtos que o valor e acima da media e: %d\n", qtacima);
	printf("o maior valor e %.2f do produto %s\n", valor[caro], nome[caro]);
	
	printf("\n Listagem de produtos:\n");
	for(int i=0; i<5;i++){
		printf("%s - %2.f\n", nome[i], valor[i]);
	}
}