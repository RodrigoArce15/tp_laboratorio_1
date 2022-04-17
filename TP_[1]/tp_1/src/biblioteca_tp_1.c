/*
 * biblioteca_tp_1.c
 *
 *  Created on: 14 abr. 2022
 *      Author: Rodrigo Arce
 */
#include <stdio.h>
#include <stdlib.h>

int getNumero(float * pNumeroIngresado, char * mensaje, char * mensajeIncorrecto, int maximo, int minimo, int cantidadIntentos){
int retorno;
retorno = -1;
float auxNumeroIngresado;

if(pNumeroIngresado != NULL && maximo >= minimo && minimo <= maximo && cantidadIntentos > 0){

do{
	printf("%s", mensaje);
	scanf("%f", &auxNumeroIngresado);
	cantidadIntentos--;

	if(auxNumeroIngresado >= minimo && auxNumeroIngresado <= maximo){

		*pNumeroIngresado = auxNumeroIngresado;
		retorno = 0;
		break;
	}
	else{
		printf("%s", mensajeIncorrecto);
	}
}while(cantidadIntentos > 0);
}
return retorno;
}


int getInt(int * pNumeroIngresado, char * mensaje, char * mensajeIncorrecto, int maximo, int minimo, int cantidadIntentos){
int retorno;
retorno = -1;
float auxNumeroIngresado;

if(pNumeroIngresado != NULL && maximo >= minimo && minimo <= maximo && cantidadIntentos > 0){

do{
	printf("%s", mensaje);
	scanf("%f", &auxNumeroIngresado);
	cantidadIntentos--;

	if(auxNumeroIngresado >= minimo && auxNumeroIngresado <= maximo){

		*pNumeroIngresado = auxNumeroIngresado;
		retorno = 0;
		break;
	}
	else{
		printf("%s", mensajeIncorrecto);
	}
}while(cantidadIntentos > 0);
}
return retorno;
}













