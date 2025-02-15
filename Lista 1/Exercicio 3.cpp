#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Faça um programa que receba dez números inteiros. Calcule e mostre: 
• A soma dos números primos 
• A média dos números múltiplos de 3 que são maiores que 10 
• A quantidade de números entre 10 e 20 (inclusive) */
int main()
{
	setlocale(LC_ALL, "Portuguese");
	while(true)
	{
		int n, primo=0, varprimo=0, qtm10=0, soma10=0, qntida=0;
		float media=0;
		char c;
		for(int i=1; i<=10; i++)
		{
			varprimo=0;
			printf ("Digite o %d numero \n", i);
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
				primo+=n;
			}
			if(n%3==0 && n>10)
			{
				soma10+=n;
				qtm10++;
			}
			if(10<=n && n<=20)
			{
				qntida++;
			}
		}
		if(qtm10>0)
		{
		media=soma10/qtm10;
		}
		printf("A soma dos numeros primos e: %d \n", primo);
		printf("A media dos numeros multiplos de 3 e maiores que 10 e: %.2f \n", media);
		printf("A quantidade de numeros entre 10 e 20 (inclusos) e: %d \n", qntida);
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