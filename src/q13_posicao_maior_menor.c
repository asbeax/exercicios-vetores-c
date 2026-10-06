/*
 * Questao 13 - Le 5 valores e mostra a posicao onde se
 * encontram o maior e o menor valor.
 * (em caso de empate, vale a primeira ocorrencia)
 */
#include <stdio.h>

#define N 5

int main(void)
{
    float v[N];
    int i, posMaior = 0, posMenor = 0;

    for (i = 0; i < N; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &v[i]);
    }

    for (i = 1; i < N; i++) {
        if (v[i] > v[posMaior]) {
            posMaior = i;
        }
        if (v[i] < v[posMenor]) {
            posMenor = i;
        }
    }

    printf("\nMaior valor: %.2f (posicao %d)\n", v[posMaior], posMaior);
    printf("Menor valor: %.2f (posicao %d)\n", v[posMenor], posMenor);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
