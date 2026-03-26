#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite, tentativas;
    int dificuldade;

    srand(time(0));

    printf("=== ADIVINHE O NUMERO ===\n");
    printf("Escolha a dificuldade:\n");
    printf("1 - Facil (1 a 20, 6 tentativas)\n");
    printf("2 - Medio (1 a 70, 8 tentativas)\n");
    printf("3 - Dificil (1 a 120, 12 tentativas)\n");
    scanf("%d", &dificuldade);

    int maxNumero;

    switch(dificuldade) {
        case 1:
            maxNumero = 20;
            tentativas = 6;
            break;
        case 2:
            maxNumero = 70;
            tentativas = 8;
            break;
        case 3:
            maxNumero = 120;
            tentativas = 12;
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    numeroSecreto = rand() % maxNumero + 1;

    printf("\nTente adivinhar o numero entre 1 e %d\n", maxNumero);

    for(int i = 1; i <= tentativas; i++) {
        printf("Tentativa %d: ", i);
        scanf("%d", &palpite);

        if(palpite == numeroSecreto) {
            printf("Parabens! Voce acertou!\n");
            break;
        } else if(palpite < numeroSecreto) {
            printf("O numero secreto eh MAIOR!\n");
        } else {
            printf("O numero secreto eh MENOR!\n");
        }

        if(i == tentativas) {
            printf("Fim de jogo! O numero era %d\n", numeroSecreto);
        }
    }

    return 0;
}
