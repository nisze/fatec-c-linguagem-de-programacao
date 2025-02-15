/* 1) Crie uma função que receba 1 número inteiro como parâmetro e verifique se ele é perfeito, 
ou seja, se a soma dos seus divisores exceto ele mesmo dá o próprio número, 
a mensagem se o número é perfeito ou não deve ser mostrada no programa principal.  */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int perfeito(int numero) {
    int soma = 0;
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma += i;
        }
    }
    if (soma == numero) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
	while(true){
   		int numero=0;
   		char c;
    	printf("Digite um numero inteiro: ");
    	scanf("%d", &numero);
    	if (perfeito(numero)) {
        	printf("O numero %d e perfeito.\n\n", numero);
    	} else {
        	printf("O numero %d nao e perfeito.\n\n", numero);
    	}
		while(true){
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
