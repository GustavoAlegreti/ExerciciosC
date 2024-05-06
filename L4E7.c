#include <stdio.h>

struct Aluno {
  int matricula;
  char nome[50];
  float nota1;
  float nota2;
  float nota3;
  float media;
};

void lerDadosAlunos(struct Aluno alunos[], int quantidade) {
  for (int i = 0; i < quantidade; i++) {
    printf("\nDigite os dados do aluno %d:\n", i + 1);
    printf("Matricula: ");
    scanf("%d", &alunos[i].matricula);
    printf("Nome: ");
    scanf("%s", alunos[i].nome);
    printf("Nota da primeira prova: ");
    scanf("%f", &alunos[i].nota1);
    printf("Nota da segunda prova: ");
    scanf("%f", &alunos[i].nota2);
    printf("Nota da terceira prova: ");
    scanf("%f", &alunos[i].nota3);

    alunos[i].media =
        (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
  }
}

void encontrarMaiorNota1(struct Aluno alunos[], int quantidade) {
  float maiorNota = alunos[0].nota1;
  int indice = 0;
  for (int i = 1; i < quantidade; i++) {
    if (alunos[i].nota1 > maiorNota) {
      maiorNota = alunos[i].nota1;
      indice = i;
    }
  }
  printf("O aluno com a maior nota na primeira prova e: %s (Nota: %.2f)\n",
         alunos[indice].nome, alunos[indice].nota1);
}

void encontrarMaiorMedia(struct Aluno alunos[], int quantidade) {
  float maiorMedia = alunos[0].media;
  int indice = 0;
  for (int i = 1; i < quantidade; i++) {
    if (alunos[i].media > maiorMedia) {
      maiorMedia = alunos[i].media;
      indice = i;
    }
  }
  printf("O aluno com a maior media geral e: %s (Média: %.2f)\n",
         alunos[indice].nome, alunos[indice].media);
}

void encontrarMenorMedia(struct Aluno alunos[], int quantidade) {
  float menorMedia = alunos[0].media;
  int indice = 0;
  for (int i = 1; i < quantidade; i++) {
    if (alunos[i].media < menorMedia) {
      menorMedia = alunos[i].media;
      indice = i;
    }
  }
  printf("O aluno com a menor media geral e: %s (Média: %.2f)\n",
         alunos[indice].nome, alunos[indice].media);
}

void verificarAprovacao(struct Aluno aluno) {
  if (aluno.media >= 6.0) {
    printf("%s foi aprovado!\n", aluno.nome);
  } else {
    printf("%s foi reprovado!\n", aluno.nome);
  }
}

int main() {
  struct Aluno alunos[5];

  lerDadosAlunos(alunos, 5);

  encontrarMaiorNota1(alunos, 5);

  encontrarMaiorMedia(alunos, 5);

  encontrarMenorMedia(alunos, 5);

  printf("\nSituacao dos alunos:\n");
  for (int i = 0; i < 5; i++) {
    printf("%s: ", alunos[i].nome);
    verificarAprovacao(alunos[i]);
  }

  return 0;
}