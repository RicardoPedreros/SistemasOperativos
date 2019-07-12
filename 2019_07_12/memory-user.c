#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv){
	//validar que se pasa al menos un argumento
	if(argc < 2){
		printf("NO se encontraron argumentos\n");
		return 1;
	}
	//convertir argumento en un entero. Ese numero representa la cantidad en MB
	int cant = atoi(argv[1]);

	//solicitar esa cantidad de MB al heap del 'address space' y asignarlo a un arreglo
	int *arr = malloc(cant*1024*1024*(sizeof(int)));
	if(arr == NULL){
		printf("Memoria no asignada");
	}

	//Iterar sobre el arreglo
	int i=0;
	for(;i < sizeof(arr);i++){
		arr[i] = i;
	}

	//Salir
	sleep(10);
	return 0;
}
