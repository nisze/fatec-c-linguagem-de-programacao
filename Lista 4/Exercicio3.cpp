/* 3) Crie uma função que receba como parâmetro a nota de um estudante, converte
o valor de nota para um conceito (A, B, C, D, E e F). Imprima o resultado dentro
da função. A -> 9 a 10; B->7 a 8,9; C-> 5 a 6,9, D-> 3 a 4,9 e E-> 0 a 2,9. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void converter(float nota) {
    if (nota >= 9 && nota <= 10) {
        printf("Conceito: A\n");
    } else if (nota >= 7 && nota < 9) {
        printf("Conceito: B\n");
    } else if (nota >= 5 && nota < 7) {
        printf("Conceito: C\n");
    } else if (nota >= 3 && nota < 5) {
        printf("Conceito: D\n");
    } else if (nota >= 0 && nota < 3) {
        printf("Conceito: E\n");
    } else {
        printf("Nota invalida.\n");
    }
}

int main() {
	while(true){
    	setlocale(LC_ALL, "Portuguese");
    	float nota;
    	char c;
    	printf("Digite a nota do estudante: ");
    	scanf("%f", &nota);
    	converter(nota);
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
