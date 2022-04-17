/*
 * calculos.h
 *
 *  Created on: 16 abr. 2022
 *      Author: Rodrigo Arce
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_
/// @param dato1
/// @param porcentaje
/// @return
/// Descripci�n-
/// Agrega 1 float y 1 Int.
/// Su funci�n es calcular el porcentaje de descuento
float calculosTarjetaDebito(float *dato1, int porcentaje);
/// @param dato1
/// @param porcentaje
/// @return
/// Descripci�n-
/// Agrega un float y un Int.
/// Su funci�n es calcular el porcentaje de inter�s
float calculosTarjetaCredito(float *dato1, int porcentaje);
/// @param dato1
/// @param dato3
/// @return
/// Descripci�n-
/// Agrega 2 float
/// Su funci�n es transformar el precio en pesos a Bitcoin
float calculosBitcoin(float *dato1, float *dato3);
/// @param dato1
/// @param dato2
/// @return
/// Descripci�n-
/// agrega 2 float
/// Su funci�n es calcular la diferencia de precios entre Aerolineas y Latam
float calculoDiferenciaDePrecio(float *dato1, float *dato2);

#endif /* CALCULOS_H_ */


