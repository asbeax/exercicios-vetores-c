/*
 * Questao 12 - Le 5 valores e mostra todos os valores lidos
 * junto com o maior, o menor e a media.
 */
#include <stdio.h>

#define N 5

int main(void)
{
    float v[N];
    float maior, menor, soma = 0.0f;
    int i;

    for (i = 0; i < N; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &v[i]);
        soma += v[i];
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

    printf("\nValores lidos: ");
    for (i = 0; i < N; i++) {
        printf("%.2f ", v[i]);
    }

    printf("\nMaior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Media dos valores: %.2f\n", soma / N);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
