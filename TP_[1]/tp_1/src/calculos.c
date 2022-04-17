/*
 * calculos.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Rodrigo Arce
 */

#include <stdio.h>
#include <stdlib.h>

float calculosTarjetaDebito(float *dato1, int porcentaje){
float resultado;
float resultadoFinal;

if(dato1 != NULL && porcentaje >0){

resultado = *dato1 * porcentaje / 100;
resultadoFinal = *dato1 - resultado;
}
	return resultadoFinal;
}

float calculosTarjetaCredito(float *dato1, int porcentaje){
	float resultado;
	float resultadoFinal;

	if(dato1 != NULL && porcentaje >0){

	resultado = *dato1 * porcentaje / 100;
	resultadoFinal = *dato1 + resultado;
	}
		return resultadoFinal;
	}

float calculosBitcoin(float *dato1, float *dato3){
	float resultadoFinal;

	if(dato1 != NULL){
	resultadoFinal = *dato1 / *dato3;
}
	return resultadoFinal;
}

float calculoDiferenciaDePrecio(float *dato1, float *dato2){
	float resultadoFinal;

	resultadoFinal = *dato1 - *dato2;
	if(resultadoFinal < 0){

		resultadoFinal = *dato2 - *dato1;
	}
	return resultadoFinal;
}
