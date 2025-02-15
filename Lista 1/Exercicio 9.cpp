#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*  Faça um programa que receba a idade e o peso de 10 pessoas. Calcule e mostre na 
tela: 
• A média das idades 
• O maior peso 
• A média das idades das pessoas com idade entre 30 e 40 anos
• A quantidade de pessoas com peso superior a 70 quilos  */
int main()
{
	char c;
	while(true)
	{
		int idade=0, peso=0, maior=0, media=0, somaid=0, mediaid=0, mediaent=0, somaent=0, countent=0, quant=0;
		for(int i=1; i<=10 ; i++)
		{
			printf("\nDigite a %d idade \n", i);
			scanf("%d", &idade);
			printf("Digite o %d peso \n", i);
			scanf("%d", &peso);
			if(peso>maior)
			{
				maior=peso;
			}
			if(idade>=30 && idade<=40)
			{
				countent++;
				somaent+=idade;
			}
			if(peso>70)
			{
				quant++;
			}
			mediaid++;
			somaid+=idade;
		}
		if(countent>0)
		{
		mediaent=somaent/countent;
		}
		if(mediaid>0)
		{
		media=somaid/mediaid;	
		}
		printf("A media das idades e: %d \n", media);
		printf("O maior peso e: %d \n", maior);
		printf("A media das idades das pessoas com idade entre 30 e 40 anos e: %d \n", mediaent);
		printf("A quantidade de pessoas com peso superior a 70 quilos e: %d \n", quant);
		while(true)
		{
			getchar();
			printf("Deseja reiniciar? (S/N) \n");
			scanf("%c", &c);
			if(c=='N'||c=='n')
			{
				return 0;
			}
			else if(c=='s'|| c=='S')
			{
				break;
			}
			else
			{
				printf ( "Valor invalido, favor ultilizar 's' ou 'n'. \n" );
			}
		}
	}
}
		
		