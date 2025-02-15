/* 4) Crie uma função que receba três notas de um aluno como parâmetro e uma letra.
 Se a letra for ‘A’, a função deve calcular a média aritmética das notas do aluno; 
 se a letra for ‘P’, deverá calcular a média ponderada, com pesos 5, 3 e 2. 
 Retorne a média calculada para o programa principal. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcula_media(float nota1, float nota2, float nota3, char tipo_media) {
    float media;

    if (tipo_media == 'A' || tipo_media == 'a') {
        media = (nota1 + nota2 + nota3) / 3;
    } else if (tipo_media == 'P' || tipo_media == 'p') {
        media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10;
    } else {
        printf("Tipo de media invalido.\n");
        media = -1; // Indica um valor inválido
    }

    return media;
}

int main() {
  	setlocale(LC_ALL, "Portuguese");
  	
	while(true){
		float nota1=0, nota2=0, nota3=0, media=0;
  		char tipo_media, c;
  		printf("Digite as tres notas do aluno:\n");
  		printf("Nota 1: ");
   		scanf("%f", &nota1);
   		printf("Nota 2: ");
   		scanf("%f", &nota2);
   		printf("Nota 3: ");
  		scanf("%f", &nota3);

  		printf("Digite 'A' para media aritmetica ou 'P' para media ponderada: ");
  		scanf(" %c", &tipo_media);

  		media = calcula_media(nota1, nota2, nota3, tipo_media);

   		if (media != -1) {
        	printf("A media calculada e: %.2f\n", media);
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
}
