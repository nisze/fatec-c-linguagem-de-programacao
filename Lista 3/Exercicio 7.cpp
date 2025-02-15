/*7. Escreva um programa que preencha uma matriz 5 x 4, com as notas de 5 alunos.
Preencha também um vetor com os nomes dos alunos.
a. Calcule a média de cada aluno e armazene em um vetor
b. Mostre na tela a maior média e o nome do aluno que obteve a maior média
c. Faça um relatório mostrando na tela o nome do aluno e a média*/
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese");
	int matriz[5][4];
	char aluno[5][50];
	float media[5], soma[5], maiormedia=0;
	int total[4] = {0};
	int indice_1, indice_2;
	for (int i = 0; i < 5; i++) {
		printf("\nDigite o nome do %d aluno: ", i + 1);
		scanf("%s", aluno[i]);
        for (int j = 0; j < 4; j++) {
        	printf("\nEntre com a [%d] nota  do [%d] aluno: ", j + 1, i + 1);
            scanf("%d", &matriz[i][j]);
		}
	}
	for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            soma[i] += matriz[i][j];
        }
        media[i] = soma[i] / 4.0;
        if (media[i] > maiormedia) {
            maiormedia = media[i];
            indice_1 = i;
        }
    }
	printf("\nRelatorio de notas:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nAluno: %s, Media: %.2f", aluno[i], media[i] );
    }
    printf("\n\nMaior media foi: %.2f", maiormedia);
	for(int i=0; i<5; i++){
		if(media[i]==maiormedia){
			printf("\nAluno: %s", aluno[i]);
		}
	}
}

	

	