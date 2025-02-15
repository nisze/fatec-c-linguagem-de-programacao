#include <stdio.h>
#include <string.h>
/*9) Faça um programa que preencha um vetor com os nomes de 10 alunos, e outro vetor com 
as notas que cada aluno obteve. Calcule e mostre na tela:
• a quantidade de alunos que teve notas abaixo de 5;
• a média das notas dos alunos;
• a quantidade de alunos que teve nota acima da média;
• a maior nota e o nome do aluno;*/
int main(){
	char nome[10][50];
	float nota[10];
	float media=0,maior=0;
	int qtabaixo=0, qt=0, qtacima=0, idx, soma=0;
	printf("Digite o nome e a nota dos 10 alunos\n");
	for (int i=0; i<10; i++){
		printf("\nAluno %d: ", i+1);
		gets(nome[i]);
		printf("Nota do %d aluno: ", i+1);
		scanf("%f", &nota[i]);
		fflush(stdin);
		
		if(nota[i]<5){
			qtabaixo++;
		}
		soma+=nota[i];
		if(i==0|| nota[i]>maior){
			maior=nota[i];
		}
	}
	media=soma/10;
	for(int i=0;i<10;i++){
		if(nota[i]>media){
			qtacima++;
		}
	}
	printf("\nA quantidade de alunos que teve notas abaixo de 5 e: %d", qtabaixo);
	printf("\nA media das notas dos alunos e: %.2f", media);
	printf("\nA quantidade de alunos que teve nota acima da media e: %d", qtacima);
	
	printf("\nA maior nota e: %.2f", maior);
	for(int i=0;i<10;i++){
		if(nota[i]==maior){
			printf("\naluno: %s ", nome[i]);
		}
	}
}