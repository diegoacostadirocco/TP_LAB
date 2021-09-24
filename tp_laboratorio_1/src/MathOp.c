
float Sumar(float num1, float num2) {

	float resultado;
	resultado = num1 + num2;

	return resultado;
}

float Restar(float num1, float num2) {

	float resultado;
	resultado = num1 - num2;

	return resultado;
}

float Multiplicar(float num1, float num2) {

	float resultado;
	resultado = num1 * num2;

	return resultado;

}

int Dividir(float *resultado, float num1, float num2) {

	float result;
	int retorno;

	if (num2 != 0){
		result = num1 / num2;
		*resultado = result;
		retorno = 1;
	} else {
		retorno = 0;
	}
	return retorno;
}

int Factorear(int *resultado, double num) {

	int validarNumero;
	double auxFact;
	int validarSigno;
	int retorno;
	int i;
	int acumulador;

	acumulador = 1;
	validarSigno = NumeroNegativo(num);
 	validarNumero = IsFloat(num);
 	auxFact = num;

	if (validarNumero == 0 && validarSigno == 0) {
		for (i = auxFact; i > 1; i--) {
			acumulador = acumulador * i;
		}
		*resultado=acumulador;
		retorno = 1;
	} else {
		retorno = 0;
	}
	return retorno;
}
