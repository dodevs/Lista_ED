/*
8. Implemente a função com o cabeçalho
void swap(int *a, int *b);
inverte os valores inteiros apontados por a e b.
*/

#include <stdio.h>

void swap(int *a, int*b){
	int aux;
	aux=*a;
	*a=*b;
	*b=aux;
}

int main(int argc, char **argv){
	int a=1,b=2;
	swap(&a,&b);
	printf("%d %d",a,b);
	return 0;
}