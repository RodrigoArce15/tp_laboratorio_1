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
#include "calculos.h"

int main(void) {
	setbuf(stdout, NULL);
	int respuesta;
	int numero;
	float kilometros;
	int opcion;
	float precioAerolineas;
	float precioLatam;
	float tarjetaDebitoAerolineas;
	float tarjetaDebitoLatam;
	float tarjetaCreditoAerolineas;
	float tarjetaCreditoLatam;
	float bitcoinAerolineas;
	float bitcoinLatam;
	float precioPorKmAerolineas;
	float precioPorKmLatam;
	float diferenciaDePrecio;
	float BITCOIN = 4606954.55;

do{
respuesta = getInt(&numero, "Ingrese una opción\n\n1- Ingrese los kilometros\n2- Precio de  vuelos\n3- Calcular los costos\n4- Informar resultados\n5- Carga forzada de datos\n6- Salir\n", "Error", 6,1,3);

if(respuesta == 0){
switch(numero){
case 1:
	respuesta = getNumero(&kilometros, "\nIngrese la distancia a recorrer : ", "Ingrese una cantidad válida :", 25000, 7, 3);
	if(respuesta == 0){
		printf("Usted ha ingresado :%f\n", kilometros);
	}
     break;
case 2:
	respuesta = getInt(&opcion, "Elija la aerolinea\n1-Latam\n2-Aerolineas", "Ingrese una opción válida :", 2, 1, 3);
	    if (respuesta == 0){
		switch(opcion){
		case 1:
			respuesta = getNumero(&precioAerolineas, "Indique el precio de vuelo con Aerolineas: \n", "Ingrese una opción válida :", 1000000, 100000, 3);

			printf("Usted ha ingresado :%f\n",precioAerolineas);
			break;
		case 2:
			respuesta = getNumero(&precioLatam, "Indique el precio de vuelo con Latam: \n", "Ingrese una opción válida", 1000000, 100000, 3);
					printf("Usted ha ingresado :%f\n", precioLatam);
			break;
		}
		}
	break;
case 3:
	tarjetaDebitoAerolineas = calculosTarjetaDebito(&precioAerolineas, 10);

	tarjetaDebitoLatam = calculosTarjetaDebito(&precioLatam, 10);

	tarjetaCreditoAerolineas = calculosTarjetaCredito(&precioAerolineas, 25);

	tarjetaCreditoLatam = calculosTarjetaCredito(&precioLatam, 25);

	bitcoinAerolineas =  calculosBitcoin(&precioAerolineas,&BITCOIN);

    bitcoinLatam =  calculosBitcoin(&precioLatam,&BITCOIN);

	precioPorKmAerolineas =  calculosBitcoin(&precioLatam,&kilometros);

	precioPorKmLatam =  calculosBitcoin(&precioAerolineas,&kilometros);

    diferenciaDePrecio =  calculoDiferenciaDePrecio( &precioAerolineas,  &precioLatam);

	break;
case 4:
	printf("Precios Latam\n");
	 printf("\nPrecio con tarjeta de débito: %f", tarjetaDebitoLatam );
	 printf("\nPrecio con tarjeta de crédito: %f", tarjetaCreditoLatam );
	 printf("\nc) Precio pagando con bitcoin :%f", bitcoinLatam );
	 printf("\nd) Precio unitario:%f", precioPorKmLatam);

	 printf("Precios Aerolinea\n");
	 printf("\na) Precio con tarjeta de débito: %f", tarjetaDebitoAerolineas );
	 printf("\nb) Precio con tarjeta de crédito: %f", tarjetaCreditoAerolineas );
	 printf("\nc) Precio pagando con bitcoin : %f", bitcoinAerolineas );
	 printf("\nd) Precio unitario: %f", precioPorKmAerolineas );
	 printf("\nLa diferencia de precio es :  %f", diferenciaDePrecio );
	 break;
	    }
        }
}while(numero != 6);
	return EXIT_SUCCESS;
        }
