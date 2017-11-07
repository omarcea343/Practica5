#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

int inicio = 0;
	int medio;
	int final = 5;
	int s[5] = { 3, 5, 7, 9, 10 };
	int busqueda = 10;
	medio = (inicio + final) / 2;

	while (inicio <= final) {
		medio = (inicio + final) / 2;
		if (busqueda == s[medio]) {
			printf("El elemento esta en la posicion: %d \n", medio + 1);
			break;
		} else if (s[medio] > busqueda) {
			final = medio - 1;
		} else {
			inicio = medio + 1;
		}
	}

		return EXIT_SUCCESS;
}
