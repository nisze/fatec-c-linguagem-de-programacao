#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa que leia um conjunto de 10 números inteiros. Calcule e mostre: 
• menor número 
• soma dos números pares e maiores que 10 
• quantidade de números ímpares 
• média dos números maiores que 20 */
int main()
{
//	while(true)
//	{
		int n, menor=0, somap=0, impar=0, media=0, soma20, qt20;
		char c;
		menor=n;
		for(int i=1; i<=10; i++)
		{
			printf("Digite o %d numero inteiro: \n", i);
			scanf("%d", &n);
			if(n<menor)
			{
				menor=n;
			}
			if(n%2==0 && n>10)
			{
				somap+=n;
			}
			if(n%2!=0)
			{
				impar++;
			}
			if(n>20)
			{
				soma20+=n;
				qt20++;		
			}
			if (qt20 > 0) {
        	media = (float)soma20 / qt20;
   			}
		}
	 //	media=soma20/qt20;
		printf("soma %d \n", soma20);
		printf("qtdade %d \n", qt20);
		printf("O menor numero digitado e: %d \n", menor);
		printf("A soma dos numeros pares maiores que 10 e: %d \n", somap);
		printf("A quantidade de numeros impares e: %d \n", impar);
		printf("A media dos numeros maiores que 20 e: %d \n", media);
		
		system("pause");
		return 0;
//	}
}
