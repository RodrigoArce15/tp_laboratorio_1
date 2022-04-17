/*
 * biblioteca_tp_1.h
 *
 *  Created on: 14 abr. 2022
 *      Author: Rodrigo Arce
 */

#ifndef BIBLIOTECA_TP_1_H_
#define BIBLIOTECA_TP_1_H_

/// @param pNumeroIngresado
/// @param mensaje
/// @param mensajeIncorrecto
/// @param maximo
/// @param minimo
/// @param cantidadIntentos
/// @return
/// Descripci�n-
/// Es usada para un men� de opciones
/// Agrega 1 numero float 2 mensajes y 3 numeros enteros
/// Es utilizada para numeros flotantes en la funci�n main
///
int getNumero(float * pNumeroIngresado, char * mensaje, char * mensajeIncorrecto, int maximo, int minimo, int cantidadIntentos);
/// @param pNumeroIngresado
/// @param mensaje
/// @param mensajeIncorrecto
/// @param maximo
/// @param minimo
/// @param cantidadIntentos
/// @return
/// Descripci�n-
/// Es usada para un men� de opciones
/// agrega 4 numeros enteros y 2 mensajes
/// Es utilizada para los numeros enteros de la funci�n (opciones)
int getInt(int * pNumeroIngresado, char * mensaje, char * mensajeIncorrecto, int maximo, int minimo, int cantidadIntentos);

#endif /* BIBLIOTECA_TP_1_H_ */
