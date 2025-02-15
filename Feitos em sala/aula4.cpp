#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    double n1, d, t, p1;
    char c;

    do {
        printf("Digite o valor da sua compra: ");
        
        if (scanf("%d", &n1) == 1) {
            if (n1 <= 30) {
                d = 0;
                p1 = 0;
                t = n1;
            } else if (30 < n1 && n1 <= 100) {
                d = n1 * 0.05;
                t = n1 - d;
                p1 = 5;
            } else if (100 < n1 && n1 <= 250) {
                d = n1 * 0.1;
                t = n1 - d;
                p1 = 10;
            } else {
                d = n1 * 0.15;
                t = n1 - d;
                p1 = 15;
            }

            printf("Sua compra foi de: %.2d\n", n1);
            printf("Seu desconto é de: %.2d%% que resulta em: %.2d\n", p1, d);
            printf("Total a pagar é de: %.2d\n", t);
        } else {
            scanf("%*[^\n]"); 
            printf("Favor inserir um caractere valido\n\n");
        }

        printf("Deseja continuar disgrasa (S/N)\n\n");
        scanf(" %c", &c);

    } while (c == 's' || c == 'S');

    return 0;
}