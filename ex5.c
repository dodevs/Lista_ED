/* Escreva um algoritmo que lê do teclado uma matriz 4x2 de inteiros. A seguir, troque os elementos da
 * primeira linha com os elementos da segunda linha e os da terceira linha com a quarta linha.
 * Imprima a matriz resultante.
 */

#include <stdio.h>

void printMatriz(int matriz[][2]) {
  for(int i=0; i < 4; i++){
      for(int j=0; j < 2; j++){
          printf("%d ", matriz[i][j]);
      }
      printf("\n");
  }
}

void moveLinhas(int mat[][2], int saida, int destino){
    for(int i = 0; i < 2; i++){
      int aux = mat[destino][i];
      mat[destino][i] = mat[saida][i];
      mat[saida][i] = aux;
    }
}

int main(){
    int matriz[4][2];

    for(int i=0; i < 4; i++){
        for(int j=0; j < 2; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("%s\n", "Matriz Original");
    printMatriz(matriz);

    moveLinhas(matriz, 0, 1);
    moveLinhas(matriz, 2, 3);

    printf("%s\n", "Matriz Modificada");
    printMatriz(matriz);

    return 0;
}
