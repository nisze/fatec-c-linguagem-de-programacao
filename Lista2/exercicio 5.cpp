#include <stdio.h>
#include <string.h>
/* 5) Escreva um programa que preencha um vetor com os nomes de 5 vendedores, preencha 
também outro vetor com valor total das vendas de cada vendedor. Cada vendedor recebe 
10% de comissão sobre as vendas. Faça os seguintes cálculos e mostre os resultados na 
tela:
a. Uma listagem com o nome e o valor a receber de cada vendedor (total das 
vendas * 0.10)
b. O total (bruto) vendido pelos 5 vendedores
c. A média do total de vendas (valor bruto vendido por cada vendedor)
d. A quantidade de vendedores que venderam acima da média das vendas
e. O maior valor de comissão e o nome do vendedor que recebeu */
int main(){
	char nome[5][50];
	float venda[5];
	float comiss[5];
	float total=0, media, maior;
	int acima,var;
	
	printf("Digite o nome do vendedor e o valor das vendas: \n");
	for(int i=0; i<5;i++){
		printf("\nVendedor %d: ", i+1);
		gets(nome[i]);
		printf("Valor das vendas: ");
		scanf("%f",&venda[i]);	
		fflush(stdin);
		
		comiss[i]=venda[i]*0.10;
		
		total += venda[i];
		
		if(comiss[i]>maior){
			maior=comiss[i];
			var=i;
		}
	}
	media=total/5;
	for(int i=0; i<5; i++){
		if(venda[i]>media){
			acima++;
		}	
	}
	printf("\nListagem com o nome e o valor a receber de cada vendedor:\n");
	for(int i=0;i<5;i++){
		printf("%s - R$ %.2f\n", nome[i], comiss[i]);
	}
	printf("O total (bruto) vendido pelos 5 vendedores foi R$ %.2f:\n", total);
	printf("A media do total de vendas e:R$ %.2f\n ", media);
	printf("A quantidade de vendedores que venderam acima da media das vendas e:%d\n ", acima);
	printf("O maior valor de comissao e: %.2f o nome do vendedor que recebeu e:%s \n", comiss[var], nome[var]);
	
	
}