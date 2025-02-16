
#include <stdio.h>
#include <string.h>
/* 2) Faça um programa que preencha um vetor com 10 cores diferentes. Depois permita fazer 
uma pesquisa se uma determinada cor existe armazenada no vetor, se existir deve ser 
impresso na tela a cor e em qual posição (índice) esta cor está armazenada. A pesquisa 
deve ser feita até que seja digitado FIM na cor a ser pesquisada na lista. */


int main() {
    char cores[10][20];
    char cor_pesquisada[20];
    int i, encontrado;
    
    printf("Digite 10 cores diferentes:\n");
    for (i = 0; i < 10; i++) {
        printf("Cor %d: ", i + 1);
        scanf("%s", cores[i]);
    }

    while (true) {
        printf("\nDigite a cor que deseja pesquisar (ou 'FIM' para sair): ");
        scanf("%s", cor_pesquisada);

        if (strcmp(strupr(cor_pesquisada), "FIM") == 0) {
            break; 
        }

        encontrado = 0;
        for (i = 0; i < 10; i++) {
            if (strcmp(cor_pesquisada, cores[i]) == 0){
                encontrado = 1;
                break;
            }
        }

        if (encontrado=1) {
        	printf("A cor '%s' esta armazenada na posicao %d do vetor.\n", cor_pesquisada, i + 1);
        }
        	else{

            printf("A cor '%s' nao foi encontrada no vetor.\n", cor_pesquisada);
      	  }
    }

    return 0;
}