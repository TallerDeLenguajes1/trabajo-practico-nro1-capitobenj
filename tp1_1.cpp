#include <stdio.h>

int main(){
	int test=1;
	int *punt;
	punt=&test;
	printf("Contenido del puntero (o variable): %d\n", *punt);
	printf("La direccion de memoria almacenada por el puntero: %u\n", punt);
	printf("Direccion de memoria de la variable: %u\n", &test);// (2) y (3) Estoy guardando la dirección de memoria de la variable en el puntero por ende la dirección de la variable y la dirección almacenada en el puntero son los mismos.
	printf("Direccion de memoria del puntero: %u\n", &punt);// (4) es diferente porque los punteros son considerados variables también y por ende necesitan una dirección en la memoria.
	printf("Tamaño de la variable: %d\n", sizeof(test));

	return 0;
}
