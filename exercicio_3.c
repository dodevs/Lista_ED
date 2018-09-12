/* Faca um programa que le um vetor de inteiros e remove os elementos contendo o 
 * valor 0 (ransfira-os para o final do vetor). Mostre o  vetor resultante na tela.
 * Exemplo: Ovetor 0 1 3 -1 0 0 5 fica 1 3 -1 5 0 0 
 */

#include <stdio.h>

int main(){
	int vetorOriginal[10];
	int tamanhoVetor;

	printf("%s","Entre com a quantidade de numeros a serem lidos: (menor que 10) ");
	scanf("%d\n", &tamanhoVetor);

	for(int i = 0; i < tamanhoVetor; i++){
	       	scanf("%d\n", vetorOriginal+i );
	}

    printf("%d", *vetorOriginal);

	

	return 0;
}
