#include <stdio.h>
#define NUM_ALUNOS 15

typedef struct {
    float prova1;
    float prova2;
    float media;
    int situacao;
} Aluno;

void calcularMedia(Aluno *alunos) {
    for (int i = 0; i < NUM_ALUNOS; i++) {
        alunos[i].media = (alunos[i].prova1 + alunos[i].prova2) / 2.0;
        alunos[i].situacao = alunos[i].media >= 6.0 ? 1 : 2;
    }
}

void imprimirListagem(Aluno *alunos) {
    printf("Aluno\tProva 1\tProva 2\tMédia\tSituação\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("%d\t%.2f\t%.2f\t%.2f\t%s\n", i + 1, alunos[i].prova1, alunos[i].prova2, alunos[i].media,
               alunos[i].situacao == 1 ? "Aprovado" : "Reprovado");
    }
}

int main() {
    Aluno alunos[NUM_ALUNOS];

    printf("Digite as notas das provas 1 e 2 dos alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d: ", i + 1);
        scanf("%f %f", &alunos[i].prova1, &alunos[i].prova2);
    }

    calcularMedia(alunos);

    imprimirListagem(alunos);

    return 0;
}