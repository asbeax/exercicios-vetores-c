# Exercícios de Vetores - Parte 1

Resolução da lista de exercícios de **Lógica de Programação** sobre vetores,
escrita em **C puro**, usando apenas a biblioteca `stdio.h`.

## Questões

| Arquivo | Descrição |
|---|---|
| `src/q01_vetor_a.c` | Vetor A com 6 inteiros: atribuição, soma de posições e alteração |
| `src/q02_ler_e_mostrar.c` | Lê 6 inteiros e mostra os valores lidos |
| `src/q03_quadrados.c` | Lê 10 reais e guarda o quadrado de cada um em outro vetor |
| `src/q04_soma_posicoes_x_y.c` | Vetor de 8 posições e soma dos valores nas posições X e Y |
| `src/q05_contar_pares.c` | Conta quantos valores pares existem em um vetor de 10 posições |
| `src/q06_maior_e_menor.c` | Maior e menor elemento de um vetor de 10 posições |
| `src/q07_vetor_maior_posicao.c` | Imprime o vetor, o maior elemento e a posição dele |
| `src/q08_ordem_inversa.c` | Mostra 6 valores lidos na ordem inversa |
| `src/q09_pares_ordem_inversa.c` | Lê 6 valores pares (com validação) e mostra na ordem inversa |
| `src/q10_media_notas.c` | Média geral das notas de 15 alunos |
| `src/q11_negativos_e_positivos.c` | Quantidade de negativos e soma dos positivos de 10 reais |
| `src/q12_valores_maior_menor_media.c` | 5 valores com maior, menor e média |
| `src/q13_posicao_maior_menor.c` | Posição do maior e do menor entre 5 valores |

## Como compilar e executar

### Dev-C++
Abra o arquivo `.c` desejado, compile (F9) e execute.

### GCC (terminal)
```bash
# compilar um programa
gcc -std=c99 -Wall -Wextra src/q01_vetor_a.c -o q01_vetor_a
./q01_vetor_a

# ou compilar todos de uma vez (gera a pasta bin/)
make
./bin/q06_maior_e_menor
```

## Observações

- Apenas `stdio.h` é utilizada.
- As posições do vetor começam em **0**, como em C (por exemplo, na questão 4, X e Y vão de 0 a 7).
- Na questão 10 as notas aceitas vão de 0 a 10.
- Nas questões 7 e 13, em caso de empate, vale a primeira ocorrência do maior/menor valor.
- Os textos de saída não usam acentos para evitar caracteres quebrados no console do Windows.
