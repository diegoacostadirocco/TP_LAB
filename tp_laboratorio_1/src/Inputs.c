/*
 * Inputs.c
 *
 *  Created on: Sep 24, 2021
 *      Author: diego
 */

float IngresarNumero(char mensaje[]) {

	float flotante;

	printf("%s", mensaje);
	scanf("%f", &flotante);

	return flotante;
}
