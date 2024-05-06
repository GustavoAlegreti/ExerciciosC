
//Gera 2 vetores de 100 posições, gera números randómicos entre 0 e 100 e calcule e retorna a média.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 100

int main() {
    int vetorW[TAMANHO];
    int vetorJ[TAMANHO];
    int i;
    int maxW, minJ, mediaW, mediaJ;
    int t;

    srand(time(NULL));

    for (i = 0; i < TAMANHO; i++) {
        vetorW[i] = rand() % 101;
        vetorJ[i] = rand() % 101;
    }

    maxW = vetorW[0];
    for (i = 1; i < TAMANHO; i++) {
        if (vetorW[i] > maxW) {
            maxW = vetorW[i];
        }
    }

    minJ = vetorJ[0];
    for (i = 1; i < TAMANHO; i++) {
        if (vetorJ[i] < minJ) {
            minJ = vetorJ[i];
        }
    }

    mediaW = 0;
    for (i = 0; i < TAMANHO; i++) {
        mediaW += vetorW[i];
    }
    mediaW /= TAMANHO;

    mediaJ = 0;
    for (i = 0; i < TAMANHO; i++) {
        mediaJ += vetorJ[i];
    }
    mediaJ /= TAMANHO;

    t = maxW * (minJ + 1) / (mediaW + mediaJ);

    printf("Valor de t: %d\n", t);

    return 0;
}