#include <stdio.h>

int main(){
	int test=1;
	int *punt;
	punt=&test;
	printf("Contenido del puntero (o variable): %d\n", *punt);
	printf("La direccion de memoria almacenada por el puntero: %u\n", punt);
	printf("Direccion de memoria de la variable: %u\n", &test);// (2) y (3) Estoy guardando la direcci�n de memoria de la variable en el puntero por ende la direcci�n de la variable y la direcci�n almacenada en el puntero son los mismos.
	printf("Direccion de memoria del puntero: %u\n", &punt);// (4) es diferente porque los punteros son considerados variables tambi�n y por ende necesitan una direcci�n en la memoria.
	printf("Tama�o de la variable: %d\n", sizeof(test));

	return 0;
}
