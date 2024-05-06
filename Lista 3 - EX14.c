
//Armazena dados sobre alunos e exibe informações.

#include <stdio.h>
#include <string.h>
#define NUM_ALUNOS 5

typedef struct {
    int matricula;
    char nome[50];
    float nota_prova1;
    float nota_prova2;
    float nota_prova3;
} Aluno;

int main() {
    Aluno alunos[NUM_ALUNOS];
    int i;
    float maior_nota_prova1 = 0, maior_media = 0, menor_media = 30;

    printf("Entre com os dados dos alunos:\n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        scanf(" %[^\n]s", alunos[i].nome);
        printf("Nota da primeira prova: ");
        scanf("%f", &alunos[i].nota_prova1);
        printf("Nota da segunda prova: ");
        scanf("%f", &alunos[i].nota_prova2);
        printf("Nota da terceira prova: ");
        scanf("%f", &alunos[i].nota_prova3);

        if (alunos[i].nota_prova1 > maior_nota_prova1) {
            maior_nota_prova1 = alunos[i].nota_prova1;
        }

        float media = (alunos[i].nota_prova1 + alunos[i].nota_prova2 + alunos[i].nota_prova3) / 3;

        if (media > maior_media) {
            maior_media = media;
        }

        if (media < menor_media) {
            menor_media = media;
        }

        printf("Situação do aluno %s: ", alunos[i].nome);
        if (media >= 6) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    printf("Aluno com maior nota da primeira prova:\n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        if (alunos[i].nota_prova1 == maior_nota_prova1) {
            printf("Matrícula: %d, Nome: %s, Nota da primeira prova: %.2f\n",
                   alunos[i].matricula, alunos[i].nome, alunos[i].nota_prova1);
            break;
        }
    }

    printf("Aluno com maior media geral: \n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        float media = (alunos[i].nota_prova1 + alunos[i].nota_prova2 + alunos[i].nota_prova3) / 3;
        if (media == maior_media) {
            printf("Matricula: %d, Nome: %s, Media geral: %.2f\n",
                   alunos[i].matricula, alunos[i].nome, media);
            break;
        }
    }

    printf("Aluno com menor media geral: \n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        float media = (alunos[i].nota_prova1 + alunos[i].nota_prova2 + alunos[i].nota_prova3) / 3;
        if (media == menor_media) {
            printf("Matricula: %d, Nome: %s, Media geral: %.2f\n",
                   alunos[i].matricula, alunos[i].nome, media);
            break;
        }
    }

    return 0;
}