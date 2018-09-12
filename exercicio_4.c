/*
 * Faca um programa que leia do teclado uma matriz 3 x 3 de double e normalize os seus valores,
 * dividindo-os pelo maior valor da matriz. Imprima a matriz normalizada.
 */

#include <stdio.h>
#include <stdlib.h>

void normalize(int *mat, int linhas, int colunas, double maior) {
    for(int lin=0; lin < linhas; lin++){
        if(lin!= 0) printf("\n");
        for(int col=0; col < colunas; col++){
            printf("\t%lf", mat[lin * colunas + col]/maior);
        }
    }
}


int main() {
    double mat[3][3];
    double maior = 0;
    
    for (int i=0; i < 3; i++) {
        for(int j=0; j < 3; j++){
            printf("posicao [%d][%d]: ", i, j);
            scanf("%lf", &mat[i][j]);
            maior = mat[i][j] > maior ? mat[i][j] : maior;
        }
    }

    normalize(mat[0], 3, 3, maior);

    return 0;

}
