#include <stdio.h>

/*
6. Implemente a função com o cabeçalho
void calcula(float l, float *area, float *perimetro);
que recebe o lado l de um quadrado e retorna a sua área e perímetro.
*/

void calcula(float l, float *area, float *perimetro){
	*area = l*l;
	*perimetro = l*4;
}

int main(int argc, char **argv){
	float area, perimetro;
	calcula(9, &area, &perimetro);
	printf("Area: %.2lf, Perimetro: %.2lf", area, perimetro);
	return 0;
}