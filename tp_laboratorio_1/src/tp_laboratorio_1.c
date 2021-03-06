//====================================================================
//						DIEGO ACOSTA DIV E
//						TP_LABORATORIO_1
//						CALCULADORA
//====================================================================

#include <stdio.h>
#include <stdlib.h>

#include "Inputs.h"
#include "Validation.h"
#include "MathOp.h"


int main(void) {
	setbuf(stdout, NULL);
	int opcion;
	float numA;
	float numB;

	float sum;
	float resta;
	float division;
	float multiplicacion;

	float resultadoDivision;

	int factorialA;
	int factorialB;
	int factoreoDeA;
	int factoreoDeB;

	int flagA;
	int flagB;
	flagA = 0;
	flagB = 0;

		printf("=============== LA CALCULADORA =====================\n");
		printf("\t __________\n\t| ________ |\n\t||12345678||\n\t|__________|\n\t|[M|#|C][-]|\n\t|[7|8|9][+]|\n\t|[4|5|6][x]|\n\t|[1|2|3][/]|\n\t|[.|O|:][=]|\n");

		printf("Para utilizar la calculadora elija una de las siguientes opciones: \n");
	do {
		printf("\n1. Ingresar 1er numero\n");
		printf("2. Ingresar 2do numero\n");
		printf("3. Calcular todas las operaciones\n");
		printf("4. Informar resultados\n");
		printf("5. Salir\n");
		printf("opcion: ");
		scanf("%d", &opcion);

		switch (opcion) {
		case 1:
			numA = IngresarNumero("Ingrese un numero: ");
			flagA = 1;
			break;
		case 2:
			numB = IngresarNumero("Ingrese otro numero: ");
			flagB = 1;
			break;
		case 3:
			if (flagA == 1 && flagB == 1) {
				sum = Sumar(numA, numB);
				resta = Restar(numA, numB);
				division = Dividir(&resultadoDivision, numA, numB);
				multiplicacion = Multiplicar(numA, numB);
				factorialA = Factorear(&factoreoDeA, numA);
				factorialB = Factorear(&factoreoDeB, numB);
			} else {
			}
			break;
		case 4:
			printf("===================RESULTADOS==========================\n");
			//suma
			printf("El resultado de %.2f + %.2f es: %.2f\n", numA, numB, sum);
			//resta
			printf("El resultado de %.2f - %.2f es: %.2f\n", numA, numB, resta);

			//division
			if (division == 1) {
				printf("El resultado de %.2f / %.2f es: %.2f\n", numA, numB, resultadoDivision);
			} else {
				printf("ERROR!! No se puede dividir por cero\n");
			}

			//multiplicacion
			printf("El resultado de %.2f * %.2f es: %.2f\n", numA, numB, multiplicacion);

			//factoreos
			if(factorialA==1){
				printf("El factorial de %.2f es: %d\n", numA, factoreoDeA);
			}else{
				printf("ERROR!! No se puede factorear por numeros negativos o con decimales\n");
			}
			if(factorialB==1){
				printf("El factorial de %.2f es: %d\n", numB, factoreoDeB);
			}else{

				printf("ERROR!! No se puede factorear por numeros negativos o con decimales\n");
			}
			break;
		}
	} while (opcion != 5);

	return EXIT_SUCCESS;
}
