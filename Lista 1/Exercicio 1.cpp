#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa utilizando o comando switch que imprima o mês por extenso de 
 acordo com o número digitado pelo usuário (entre 1 e 12)*/
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	char c;
	while(true)
	{
		printf("Digite o numero do mes desejado: \n");
		scanf ("%d", &n);
		switch(n)
		{
			case 1:
				printf("Janeiro \n");
				break;
			case 2:
				printf("Fevereiro \n");
				break;
			case 3:
				printf("Março \n");
				break;
			case 4:
				printf("Abril \n");
				break;
			case 5:
				printf("Maio \n");
				break;
			case 6:
				printf("Junho \n");
				break;
			case 7:
				printf("Julho \n");
				break;
			case 8:
				printf("Agosto \n");
				break;
			case 9:
				printf("Setembro \n");
				break;
			case 10:
				printf("Outubro \n");
				break;
			case 11:
				printf("Novembro \n");
				break;
			case 12:
				printf("Dezembro \n");
				break;
			default:
				printf("Opcao invalida! Favor digitar numeros correspondentes a meses 1 ate 12! \n");
				break;
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