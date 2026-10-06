/*
 * Questao 4 - Le um vetor de 8 posicoes e depois dois valores X e Y,
 * que sao posicoes do vetor (0 a 7). Mostra a soma dos valores
 * encontrados nas posicoes X e Y.
 */
#include <stdio.h>

#define N 8

int main(void)
{
    int v[N];
    int i, x, y;

    for (i = 0; i < N; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &v[i]);
    }

    printf("\nDigite a posicao X (0 a %d): ", N - 1);
    scanf("%d", &x);
    while (x < 0 || x >= N) {
        printf("Posicao invalida! Digite um valor de 0 a %d: ", N - 1);
        scanf("%d", &x);
    }

    printf("Digite a posicao Y (0 a %d): ", N - 1);
    scanf("%d", &y);
    while (y < 0 || y >= N) {
        printf("Posicao invalida! Digite um valor de 0 a %d: ", N - 1);
        scanf("%d", &y);
    }

    printf("\nv[%d] = %d\n", x, v[x]);
    printf("v[%d] = %d\n", y, v[y]);
    printf("Soma: %d\n", v[x] + v[y]);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
