/*
 * Questao 1 - Vetor A com 6 inteiros
 * (a) atribui 1, 0, 5, -2, -5, 7
 * (b) soma A[0] + A[1] + A[5] em uma variavel simples e mostra
 * (c) altera a posicao 4 para 100
 * (d) mostra cada valor do vetor, um por linha
 */
#include <stdio.h>

int main(void)
{
    int A[6];
    int soma, i;

    /* (a) */
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    /* (b) */
    soma = A[0] + A[1] + A[5];
    printf("Soma de A[0], A[1] e A[5]: %d\n", soma);

    /* (c) */
    A[4] = 100;

    /* (d) */
    printf("\nValores do vetor A:\n");
    for (i = 0; i < 6; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    return 0;
}
