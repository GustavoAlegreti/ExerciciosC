#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    char curso[50];
};

int main() {
   
    struct Aluno alunos[5];
  
    printf("Digite os dados dos 5 alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i+1);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Número de matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Curso: ");
        scanf("%s", alunos[i].curso);
    }

    printf("\nDados dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i+1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Numero de matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n", alunos[i].curso);
    }

    return 0;
}