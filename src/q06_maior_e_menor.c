/*
 * Questao 6 - Le um vetor de 10 posicoes e imprime
 * o maior e o menor elemento.
 */
#include <stdio.h>

#define N 10

int main(void)
{
    int v[N];
    int i, maior, menor;

    for (i = 0; i < N; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    maior = v[0];
    menor = v[0];
    for (i = 1; i < N; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
        if (v[i] < menor) {
            menor = v[i];
        }
    }

    printf("\nMaior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
