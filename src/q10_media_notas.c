/*
 * Questao 10 - Le a nota da prova de 15 alunos, guarda em um vetor,
 * calcula e imprime a media geral. Notas validas: de 0 a 10.
 */
#include <stdio.h>

#define ALUNOS 15

int main(void)
{
    float nota[ALUNOS];
    float soma = 0.0f;
    int i;

    for (i = 0; i < ALUNOS; i++) {
        printf("Nota do aluno %d (0 a 10): ", i + 1);
        scanf("%f", &nota[i]);
        while (nota[i] < 0 || nota[i] > 10) {
            printf("Nota invalida! Digite um valor de 0 a 10: ");
            scanf("%f", &nota[i]);
        }
        soma += nota[i];
    }

    printf("\nMedia geral da turma: %.2f\n", soma / ALUNOS);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
