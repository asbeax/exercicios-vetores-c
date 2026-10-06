/*
 * Questao 11 - Preenche um vetor com 10 numeros reais, mostra a
 * quantidade de numeros negativos e a soma dos positivos.
 */
#include <stdio.h>

#define N 10

int main(void)
{
    float v[N];
    float somaPositivos = 0.0f;
    int i, negativos = 0;

    for (i = 0; i < N; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &v[i]);
        if (v[i] < 0) {
            negativos++;
        } else if (v[i] > 0) {
            somaPositivos += v[i];
        }
    }

    printf("\nQuantidade de numeros negativos: %d\n", negativos);
    printf("Soma dos numeros positivos: %.2f\n", somaPositivos);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
