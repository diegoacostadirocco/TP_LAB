
#ifndef VALIDATION_H_
#define VALIDATION_H_

#include <stdio.h>
#include <stdlib.h>

/// \fn IsFloat
/// \brief Pide un flotante, y lo verifica
/// return: true = 0, false = 1
/// \param flotante
/// \return int
/// \fn NotFloat
/// \brief Pide un flotante, verifica si es negativo.
/// return: true = 0, false = 1
/// \param flotante
/// \return int

int IsFloat(float flotante);
int NumeroNegativo(float flotante);

#endif /* VALIDATION_H_ */
