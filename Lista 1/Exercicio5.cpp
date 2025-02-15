#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Faça um programa que receba dez números inteiros. Calcule e mostre: 
• A quantidade de números primos 
• A soma dos múltiplos de 5
• A média dos ímpares e maiores que 10*/
int main()
{
	while(true)
	{
		int n, primo=0, varprimo, somamul=0, media=0, somamaior=0, countmaior=0;
		char c;
		for(int i=1;i<=10;i++)
		{
			varprimo=0;
			printf("Digite o %d numero \n" , i);
			scanf("%d", &n);
			for(int j=1; j<=n; j++)
			{
				if(n%j==0)
				{
					varprimo++;	
				}
			}
			if(varprimo==2)
			{
				primo++;
			}
			if(n%5==0)
			{
				somamul+=n;
			}
			if(n%2 != 0 && n>10)
			{
				somamaior+=n;
				countmaior++;
			}
		}
			if(countmaior>0)
			{
				media=somamaior/countmaior;
			}
		printf("A quantidade dos numeros primos e: %d \n", primo);
		printf("A soma dos multiplos de 5 e: %d \n", somamul);
		printf("A media dos impares maiores que 10 e: %d \n", media);
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