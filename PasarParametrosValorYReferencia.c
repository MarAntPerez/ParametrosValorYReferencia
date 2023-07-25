#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumarPorValor(int a, int b);
void sumarPorReferencia(int a,int b,int *resultado);

int sumarPorValor(int a, int b){
	return a+b;
}

void sumarPorReferencia(int a,int b,int *resultado){
	*resultado = a+b;
}

int main(int argc, char *argv[]) {
	
	int a = 5;
	int b = 2;
	int resultado = 0;
	
	printf("Valores: %i, %i\n", a, b);
	
	printf("Paso de parametros por valor: \n");
	resultado = sumarPorValor(a, b);
	printf("Resultado: %i\n", resultado);
	
	printf("Pase de parametros por referencia: \n"); //Pasamos el valor de posicion en memoria de la variable resultado
	sumarPorReferencia(a, b, &resultado);
	printf("Resultado: %i\n", resultado);
	
	return 0;
}
