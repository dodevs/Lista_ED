/*Crie uma função que imprime um vetor de inteiros de tamanho arbitrário, com o seguinte cabeçalho:
void imprime(int *v, int tam);
*/

#include <stdio.h>

void imprime(int *v, int tam){
	int i;
	for (i=0;i<tam;i++){
		printf("%d ",v[i]);
	}
}



int main(){
	int v[5]={1,2,3,4,5}, tam=5;
	imprime(v,tam);
}