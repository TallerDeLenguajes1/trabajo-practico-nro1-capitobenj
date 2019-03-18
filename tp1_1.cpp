#include <stdio.h>

int main(){
	int test=1;
	int *punt;
	punt=&test;
	printf("Contenido de la variable: %d\n", *punt);
	printf("Direccion de memoria de la variable: %u\n", punt);
	printf("Direccion de memoria del puntero: %u\n", punt);
	printf("Tamaño de la variable: %d\n", sizeof(test));

	return 0;
}
