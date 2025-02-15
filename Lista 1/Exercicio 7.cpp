#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*) Faça um programa que receba várias idades. Finalize a entrada digitando idade igual 0
ou negativa. Calcule e imprima na tela:
• Média das idades;
• Maior idade
• Menor idade
• Quantidade de idades que são menores que 10 */
int main()
{
	int idade, intro=1, soma=0, qtd=0, media=0, maior=0, menor=0, menorq=0;
	printf("Digite a idade, caso queira encerrar digite 0 ou algarismo negativo \n");	
	while(true)
	{	
		scanf("%d", &idade);
		if(idade<=0)
		{
			break;
		}
		else
		{
			if(intro==1)
			{
				menor=idade;
				intro=0;
			}
			if(idade<menor)
			{
				menor=idade;
			}
			if(idade>maior)
			{
				maior=idade;
			}
			if(idade<10)
			{
				menorq++;	
			}
			qtd++;
			soma+=idade;
		}
	}
	media=soma/qtd;
	printf("A media da idade das pessoas e: %d \n", media);
	printf("A menor idade e: %d \n", menor);
	printf("A maior idade e: %d \n", maior);
	printf("A quantidade de pessoasa que sao menores que 10 anos e: %d \n", menorq);
}