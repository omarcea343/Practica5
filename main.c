#include <stdio.h>

int main(){
	
	int inicio = 0;
	int medio;
	int final = 15;
	int vector[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int busqueda;
	
	printf("Este programa usa la busqueda binaria para encontrar la posicion de un numero. \n\n");
	printf("Ingresa el numero a buscar. \n\n"); 
	scanf("%d", &busqueda);
	
	medio = (inicio + final) / 2;
	
	while (inicio <= final) {
		medio = (inicio + final) / 2;
		if (busqueda == vector[medio]) {
			printf("dato %d encontrado en la posicion %d",busqueda, medio + 1);
			break;
		} else if (vector[medio] > busqueda) {
			final = medio - 1;
		} else {
			inicio = medio + 1;
		}
	}
	
	return 0;
}
