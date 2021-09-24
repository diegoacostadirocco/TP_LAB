
#ifndef MATHOP_H_
#define MATHOP_H_

#include <stdio.h>
#include <stdlib.h>

#include "Validation.h"

/// \fn Sumar
/// \brief Pide dos flotantes, los suma y devuelve el resultado.
/// \param num1
/// \param num2
/// \return float

/// \fn Restar
/// \brief Pide dos flotantes, los resta y devuelve el resultado.
/// \param num1
/// \param num2
/// \return

/// \fn Multiplicar
/// \brief Pide dos flotantes, los multiplica y devuelve el resultado.
/// \param num1
/// \param num2
/// \return float

/// \fn Dividir
/// \brief Pide dos flotantes y una dirección de memoria. Verifica si no es cero para realizar la division
/// y guarda el resultado en la dirección de memoria
/// \param resultado
/// \param num1
/// \param num2
/// \return int

/// \fn Factorear
/// \brief Pide un flotante y una dirección de memoria.verifica si es float o negativo, caso contrario continua
/// y guarda el resultado en la direccion de memoria
/// \param resultado
/// \param num
/// \return int
float Sumar(float num1, float num2);
float Restar(float num1, float num2);
float Multiplicar(float num1, float num2);
int Dividir(float *resultado, float num1, float num2);
int Factorear(int *resultado, float num);

#endif /* MATHOP_H_ */
