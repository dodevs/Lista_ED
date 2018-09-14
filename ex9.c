/*Crie um programa que percorre uma matriz de inteiros 5×4 usando apenas um loop com ponteiros.
Preencha cada posição com o seu valor ordinal, começando do zero. Exemplo: m[0][0] == 0,
m[0][1] == 1, m[1][0] == 4, etc.
Obs.: Não eh necessário alocar a matriz dinamicamente, faca tudo na funcao principal.
*/

#include<stdio.h>


int main(){
	int m[5][4];
	int c = 0;
	for(int *p=*m;c<20;p++,c++){
		*p=c;
	}
	for (int i=0;i<5;i++){
		for (int j=0;j<4;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
