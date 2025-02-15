#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Cada espectador de um cinema respondeu a um questionário no qual constava sua idade 
e sua opinião em relação ao filme (3- ótimo;2- bom;1-regular). Faça um programa que 
receba a idade e a opinião de um número indeterminado de pessoas. Para finalizar a 
entrada deve ser digitado uma idade negativa ou zero. Calcule e mostre: 
• A média das idades das pessoas que responderam ótimo
• A quantidade de pessoas que responderam regular
• A quantidade de pessoas que responderam bom */
int main()
{
	int idade, op, somaid=0, contot=0, contb=0, contr=0;
	float  media=0;
	while(true)
	{
		printf("\n Digite sua idade, para finalizar digite 0 ou negativo. \n ");
		scanf("%d", &idade);
		if(idade<=0)
		{
			break;
		}
		while(true)
		{
			printf(" Qual sua opiniao sobre o filme? digite (1) regular, (2) bom ou (3) otimo. \n");
			scanf("%d", &op);
			if(op==1 || op==2 || op==3)
			{
				if(op==3)
				{
					somaid+=idade;
					contot++;
					break;
				}
				if(op==2)
				{
					contb++;
					break;
				}
				if(op==1)
				{
					contr++;
					break;
				}
			}
			else
			{
				printf("Opcao invalida, digite valor entre 1, 2 ou 3. \n");
			}
		}
	}
	media=somaid/contot;
	printf("A media da idade das pessoas que responderam otimo e: %.2f \n", media);
	printf("A quantidade de pessoas que respondeu regular e: %d \n", contr);
	printf("A quantidade de pessoas que respondeu bom e: %d \n", contb);
	
	system("pause");
}