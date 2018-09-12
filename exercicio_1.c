/*
 * Faca um programa que leia o nome de uma pessoa, a quantidade de provas realizadas por ela e suas
 * resectivas notas. O programa deve apresentar ao final o nome e a média das notas obtidas pela pessoa.
 */

#include <stdio.h>

int main(){
	char* nome;
	int qtdProvas;
	float notaProva;
	float somaNotas = 0.0;

	printf("%s", "Insira o nome do aluno:");
	scanf("%[^\n]s", nome);
	printf("%s", "Insira a quantidade de provas:");
	scanf("%d", &qtdProvas);

	for(int i=1; i <= qtdProvas; i++){
		printf("%s %d\n ", "Insira a nota da prova", i);
		scanf("%f", &notaProva);
		somaNotas += notaProva;
	}

	printf("%s - nota media: %f\n", nome, somaNotas/qtdProvas);
	return 0;
}
