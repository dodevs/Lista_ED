/*
* Escreva um programa que gera e escreve os quatro primeiros numeros perfeitos.
* Um numero perfeito é aquele que é igual a soma dos seus divisores (por exemplo 6,28, etc)
*/

#include <stdio.h>

int main(){
	int nElem = 4, ocorrencias = 0, numero = 1, soma = 0;

	while(ocorrencias < nElem){
		for(int i = 1; i < numero; i++ )
			if(numero%i==0)
				soma += i;

		if(soma == numero){
			printf("%d ", numero);
			ocorrencias++;
		}

		soma = 0.0;
		numero++;
	}
	return 0;
}
