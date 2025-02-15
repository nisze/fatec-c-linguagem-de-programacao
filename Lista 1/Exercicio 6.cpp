#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Faça um programa que receba 10 números inteiros. Calcule o fatorial de cada número e 
mostre na tela. */
int main()
{
	int n, fat=1;
	char c;
	while(true)
	{
		for(int i=1; i<=10; i++)
		{
			fat=1;
			printf("digite o %d numero \n", i);
			scanf("%d", &n);
			if(n==0)
			{
				printf("Fatorial de 0 e 1. \n");
			}
			for (int j=1; j<=n ;j++)
			{
				fat	*=j;

			}
			printf("O fatorial de %d e: %d \n",n ,  fat);	
		}
		while(true)
		{
			printf ("Deseja reiniciar? (S/N) \n");
			scanf ("%s", &c); 
			if(c=='s'||c=='S')
			{
				break;
			}
			else if(c=='n'||c=='N')
			{
				return 0;
			}
			else
			{
				printf ( "Valor invalido, favor ultilizar 's' ou 'n'. \n" );
			}
		}
	}
}