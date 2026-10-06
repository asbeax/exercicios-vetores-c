/*
 * Questao 3 - Le 10 numeros reais, calcula o quadrado de cada um
 * e guarda em outro vetor. Imprime os dois conjuntos.
 */
#include <stdio.h>

#define N 10

int main(void)
{
    float original[N], quadrado[N];
    int i;

    for (i = 0; i < N; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &original[i]);
        quadrado[i] = original[i] * original[i];
    }

    printf("\nConjunto original:\n");
    for (i = 0; i < N; i++) {
        printf("%.2f ", original[i]);
    }

    printf("\n\nConjunto dos quadrados:\n");
    for (i = 0; i < N; i++) {
        printf("%.2f ", quadrado[i]);
    }
    printf("\n");

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
