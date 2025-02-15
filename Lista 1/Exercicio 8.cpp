#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 /* Faça um programa que receba um número, calcule e mostre a tabuada desse número na 
tela */
int main()
{
	int n;
	char c;
	while(true)
	{
		printf("Digite um numero \n");
		scanf("%d", &n);
		for(int i=1; i<=10; i++)
		{
			printf("%d x %d = %d \n", n, i, n*i);
		}
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