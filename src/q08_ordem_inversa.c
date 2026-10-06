/*
 * Questao 8 - Le 6 valores inteiros e mostra os valores
 * lidos na ordem inversa.
 */
#include <stdio.h>

#define N 6

int main(void)
{
    int v[N];
    int i;

    for (i = 0; i < N; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nValores na ordem inversa:\n");
    for (i = N - 1; i >= 0; i--) {
        printf("%d\n", v[i]);
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
