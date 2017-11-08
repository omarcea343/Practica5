#include <stdio.h>

int main(){
	
	int inicio = 0;
	int medio;
	int final = 5;
	int s[5] = { 3, 5, 7, 9, 10 };
	int busqueda;
	
	printf("Ingresa el numero a buscar. \n"); 
	scanf("%d", &busqueda);
	
	medio = (inicio + final) / 2;
	
	while (inicio <= final) {
		medio = (inicio + final) / 2;
		if (busqueda == s[medio]) {
			printf("dato %d encontrado posicion %d",busqueda, medio + 1);
			break;
		} else if (s[medio] > busqueda) {
			final = medio - 1;
		} else {
			inicio = medio + 1;
		}
	}
	
	return 0;
}
