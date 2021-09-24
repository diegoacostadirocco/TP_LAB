
int IsFloat(float flotante) {

	int entero;
	int retorno;

	entero = flotante;
	if (flotante - entero == 0) {
		retorno = 0;
	} else {
		retorno = 1;
	}
	return retorno;
}

int NumeroNegativo(float flotante) {

	int retorno;

	if (flotante < 0) {
		retorno = 1;
	} else {
		retorno = 0;
	}
	return retorno;
}

