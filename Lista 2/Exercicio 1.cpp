#include <stdio.h>

/* 1) Escreva um programa que leia a idade de 10 pessoas e armazene-as em um vetor. Calcule 
e mostre:
a) a menor idade
b) a média das idades
c) a quantidade de pessoas que tem idade entre 20 e 30 anos (inclusive)
d) a quantidade de pessoas com idade maior que a média */

int main() {
    int idade[10];
    int i, soma = 0, menor, qtentre = 0, maior = 0;
    float media;
    
    for(i = 0; i < 10; i++) {
        printf("Digite a idade da %d pessoa: ", i + 1);
        scanf("%d", &idade[i]);
        soma += idade[i];

        if(i == 0 || idade[i] < menor) {
            menor = idade[i];
        }
        if(idade[i] >= 20 && idade[i] <= 30) {
            qtentre++;
        }
    }

    media=soma / 10;

    for(i = 0; i < 10; i++) {
        if(idade[i] > media) {
            maior++;
        }
    }

    printf("A menor idade e: %d\n", menor);
    printf("A media das idades e: %.2f\n", media);
    printf("A quantidade de pessoas entre 20 e 30 anos e: %d\n", qtentre);
    printf("A quantidade de pessoas com idade maior que a media e: %d\n", maior);

    return 0;
}