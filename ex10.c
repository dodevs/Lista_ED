/*
Considere uma versão simplificada da função memcpy como abaixo:
void memcpy(char* dest, const char* src, int count)
{
      while (count--) 
           *dest++ = *src++;
}
Esta função copia count bytes (char) do endereço de fonte src para o endereço de destino dest, sem considerar sobreposição de áreas de memória.
Reescreva a essa função usando a notação de vetor, mas mantendo o mesmo comportamento da função original. 
*/

#include<stdio.h>

void memcpy2(char* dest, const char* src, int count){
	int cont=0;
	
	while (count--){
		dest[cont]=src[cont];
		cont++;
	}
	
}


int main(){
	char a[5]="mat";
	char b[5];
	memcpy2(b,a,5);
	printf(b);
}