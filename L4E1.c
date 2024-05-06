#include <stdio.h>

int main() {
  double matriz1[2][3] = {{1.1, 2.2, 3.3}, {4.4, 5.5, 6.6}};
  double matriz2[2][3] = {{7.7, 8.8, 9.9}, {10.1, 11.11, 12.12}};
  double soma[2][3];

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      soma[i][j] = matriz1[i][j] + matriz2[i][j];
    }
  }

  printf("Soma das matrizes:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%.2lf ", soma[i][j]);
    }
    printf("\n");
  }

  return 0;
}