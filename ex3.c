/* Faca um programa que le um vetor de inteiros e remove os elementos contendo o
 * valor 0 (ransfira-os para o final do vetor). Mostre o  vetor resultante na tela.
 * Exemplo: Ovetor 0 1 3 -1 0 0 5 fica 1 3 -1 5 0 0
 */

#include <stdio.h>

void shift(int *v, int tam, int idx){
	for(; idx < tam; idx++)
		v[idx] = v[idx+1];
}

int main(){
	int vetorOriginal[] = {0,1,1,0,0}; /* Resultado final deve ser {1, 3, -1, 5, 4, 0, 0, 0, 0, 0} */
	int VET_TAM = sizeof(vetorOriginal)/sizeof(vetorOriginal[0]);

	int i = 0, z = 0;
	while(i != VET_TAM){
		if(i == VET_TAM - z)
			break;
		if(vetorOriginal[i] == 0){
			shift(vetorOriginal, VET_TAM, i);
			vetorOriginal[VET_TAM-1] = 0;
			z++;
			continue;
		}
		i++;
	}
	for(int i = 0; i < VET_TAM; i++){
		printf("%d ", vetorOriginal[i]);
	}
	return 0;
}
