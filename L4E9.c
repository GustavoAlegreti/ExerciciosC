#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_APOSTAS 10
#define NUM_NUMEROS 6
#define MIN_NUMERO 1
#define MAX_NUMERO 60

struct Aposta {
  int concurso;
  int numerosAzar[NUM_NUMEROS];
  int apostas[NUM_APOSTAS][NUM_NUMEROS];
};

int numeroEscolhido(int numero, int numerosEscolhidos[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    if (numerosEscolhidos[i] == numero) {
      return 1;
    }
  }
  return 0;
}

void gerarApostas(struct Aposta *aposta) {
  srand(time(NULL));

  printf("Informe seus 6 numeros de azar:\n");
  for (int i = 0; i < NUM_NUMEROS; i++) {
    scanf("%d", &aposta->numerosAzar[i]);
  }

  for (int i = 0; i < NUM_APOSTAS; i++) {
    int numerosEscolhidos[NUM_NUMEROS] = {0};

    for (int j = 0; j < NUM_NUMEROS; j++) {
      int numero;
      do {
        numero = rand() % (MAX_NUMERO - MIN_NUMERO + 1) + MIN_NUMERO;
      } while (numeroEscolhido(numero, aposta->numerosAzar, NUM_NUMEROS) ||
               numeroEscolhido(numero, numerosEscolhidos, j));
      aposta->apostas[i][j] = numero;
      numerosEscolhidos[j] = numero;
    }
  }
}

void mostrarApostas(struct Aposta aposta) {
  printf("Apostas para o concurso %d:\n", aposta.concurso);
  for (int i = 0; i < NUM_APOSTAS; i++) {
    printf("Aposta %d:", i + 1);
    for (int j = 0; j < NUM_NUMEROS; j++) {
      printf(" %d", aposta.apostas[i][j]);
    }
    printf("\n");
  }
}

void encontrarNumeroMaisApostado(struct Aposta aposta) {
  int contagem[MAX_NUMERO + 1] = {0};

  for (int i = 0; i < NUM_APOSTAS; i++) {
    for (int j = 0; j < NUM_NUMEROS; j++) {
      contagem[aposta.apostas[i][j]]++;
    }
  }

  int numeroMaisApostado = MIN_NUMERO;
  int frequenciaMaxima = contagem[MIN_NUMERO];
  for (int i = MIN_NUMERO + 1; i <= MAX_NUMERO; i++) {
    if (contagem[i] > frequenciaMaxima) {
      numeroMaisApostado = i;
      frequenciaMaxima = contagem[i];
    }
  }

  printf("Numero mais apostado: %d (apareceu %d vezes)\n", numeroMaisApostado,
         frequenciaMaxima);
}

int main() {
  struct Aposta aposta;

  printf("Informe o numero do concurso: ");
  scanf("%d", &aposta.concurso);

  gerarApostas(&aposta);

  mostrarApostas(aposta);

  encontrarNumeroMaisApostado(aposta);

  return 0;
}