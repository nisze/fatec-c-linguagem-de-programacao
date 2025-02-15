#include <stdio.h>
int main()
{
	int poltrona[40]={0};
	int lugar,t,l;
	while(true)
	{
		printf("Digite o numero da poltrona desejada\n");
		scanf("%d", &lugar);
		if(lugar<=0)
		{
			break;
		}
		if(lugar<1 || lugar > 40)
		{
			printf("Numero invalido, favor digitar 1 a 40\n");
			continue;
		}
		if(poltrona[lugar-1]==0)
		{
			poltrona[lugar-1]=1;
			printf("Poltrona reservada\n");
		}
		else
		{
			printf("poltrona ocupada, escolha outra\n");
		}	
	}
	for(int i = 0; i < 40; i++)
	{
		if(poltrona[i]==1){
			printf("%d ", i+1);
		}	
	}
	
}