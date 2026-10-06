/*
 * Questao 7 - Le 10 inteiros, imprime o vetor, o maior
 * elemento e a posicao em que ele se encontra.
 */
#include <stdio.h>

#define N 10

int main(void)
{
    int v[N];
    int i, maior, posicao;

    for (i = 0; i < N; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    maior = v[0];
    posicao = 0;
    for (i = 1; i < N; i++) {
        if (v[i] > maior) {
            maior = v[i];
            posicao = i;
        }
    }

    printf("\nVetor: ");
    for (i = 0; i < N; i++) {
        printf("%d ", v[i]);
    }

    printf("\nMaior elemento: %d\n", maior);
    printf("Posicao do maior elemento: %d\n", posicao);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
