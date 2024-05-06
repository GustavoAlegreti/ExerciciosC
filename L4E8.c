#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ALUNOS 10
#define NUM_DISCIPLINAS 5

struct Disciplina {
  int codigo;
  int cargaHoraria;
};

struct Avaliacao {
  float p1;
  float p2;
  float media;
  struct Disciplina disciplina;
};

void gerarDadosAleatorios(struct Avaliacao *avaliacao) {
  avaliacao->p1 = (rand() % 110) / 10.0;
  avaliacao->p2 = (rand() % 110) / 10.0;
  avaliacao->media = (avaliacao->p1 + avaliacao->p2) / 2.0;
}

void exibirDadosAluno(struct Avaliacao *avaliacoes) {
  printf("-------------------------------\n");
  printf("Disciplinas\n");
  printf("-------------------------------\n");
  printf("Cod c. hor p1 p2 media\n");
  for (int i = 0; i < NUM_DISCIPLINAS; i++) {
    printf("%d %d %.2f %.2f %.2f\n", avaliacoes[i].disciplina.codigo,
           avaliacoes[i].disciplina.cargaHoraria, avaliacoes[i].p1,
           avaliacoes[i].p2, avaliacoes[i].media);
  }
  printf("-------------------------------\n");
}

float calcularMediaGeral(struct Avaliacao *avaliacoes) {
  float somaMedias = 0;
  for (int i = 0; i < NUM_ALUNOS * NUM_DISCIPLINAS; i++) {
    somaMedias += avaliacoes[i].media;
  }
  return somaMedias / (NUM_ALUNOS * NUM_DISCIPLINAS);
}

int main() {

  srand(time(NULL));

  struct Avaliacao avaliacoes[NUM_ALUNOS][NUM_DISCIPLINAS];

  for (int i = 0; i < NUM_ALUNOS; i++) {
    for (int j = 0; j < NUM_DISCIPLINAS; j++) {
      avaliacoes[i][j].disciplina.codigo = j + 1;
      avaliacoes[i][j].disciplina.cargaHoraria = rand() % 1000 + 100;
      gerarDadosAleatorios(&avaliacoes[i][j]);
    }
  }

  for (int i = 0; i < NUM_ALUNOS; i++) {
    printf("Aluno: %d\n", i + 1);
    exibirDadosAluno(avaliacoes[i]);
  }

  printf("Média geral da sala: %.2f\n", calcularMediaGeral(&avaliacoes[0][0]));

  return 0;
}