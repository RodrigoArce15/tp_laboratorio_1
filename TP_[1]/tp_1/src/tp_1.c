/*
 ============================================================================
 Name        : tp_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style


 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca_tp_1.h"


int main(void) {
	setbuf(stdout, NULL);
	int respuesta;
	int numero;


respuesta =  getNumero(&numero, "Ingrese una opción\n\n1- Ingrese los kilometros\n 2- Precio de  vuelos\n3- Calcular los costos\n4- Informar resultados\n5- Carga forzada de datos\n6- Salir\n", "Error", 6,1,5);

if(respuesta == 0){
	printf("%d", numero);
}
else{
	printf("ERROR");
}


	return EXIT_SUCCESS;
}
