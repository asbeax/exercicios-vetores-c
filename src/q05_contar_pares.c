/*
 * Questao 5 - Le um vetor de 10 posicoes. Conta e escreve
 * quantos valores pares ele possui.
 */
#include <stdio.h>

#define N 10

int main(void)
{
    int v[N];
    int i, pares = 0;

    for (i = 0; i < N; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0) {
            pares++;
        }
    }

    printf("\nQuantidade de valores pares: %d\n", pares);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
