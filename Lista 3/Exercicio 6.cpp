/*6. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando 
dados sobre o salário, idade e o número de filhos. Escreva um programa que leia 
esses dados, por exemplo para 10 pessoas. Armazene esses dados em uma 
matriz, depois calcule e mostre:
a) A média de salário da população
b) A média do número de filhos
c) A quantidade de filhos das pessoas que tem idade entre 15 a 25 anos
d) A média de salário de pessoas que tem idade entre 20 a 30 anos*/
#include <stdio.h>
#include <locale.h>
int main() {
	int matriz[10][3];
	int qtdfilho=0, qtdentre=0, qtdsalario=0, somasal=0, somasalentre=0, somafilho=0;
	float mediatotal=0, mediafilho=0, mediasal=0;
	setlocale(LC_ALL,"Portuguese");
	for (int i = 0; i < 10; i++) {
        printf("\nDigite a idade da [%d] pessoa: ", i + 1);
        scanf("%d", &matriz[i][0]);
        printf("\nDigite a quantidade de filhos da [%d] pessoa: ", i + 1);
        scanf("%d", &matriz[i][1]);
        printf("\nDigite o salario da [%d] pessoa: ", i + 1);
        scanf("%d", &matriz[i][2]);
    }
	for(int i=0; i<10;i++){
		somasal+=matriz[i][2];
		qtdfilho+=matriz[i][1];
		if(matriz[i][0] >=15 && matriz[i][0] <=25){
			qtdentre+=matriz[i][1];
		}
		if(matriz[i][0] >=20 && matriz[i][0] <=30){
			somasalentre+=matriz[i][2];
			qtdsalario++;
		}		
	}    
	printf("Matriz final\n");
    for (int i = 0; i <10; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
	}
	mediatotal = somasal/10.0;
	mediafilho = qtdfilho/10.0;
	if ( qtdsalario>0){
		mediasal = somasalentre/qtdsalario;
	}

	printf("\nA media de salario da populacao e: %.2f", mediatotal);
    printf("\nA media do numero de filhos e: %.2f", mediafilho);
    printf("\nA quantidade de filhos das pessoas que tem idade entre 15 a 25 anos e: %d", qtdentre);
    printf("\nA media de salario de pessoas que tem idade entre 20 a 30 anos e %.2f", mediasal );
}