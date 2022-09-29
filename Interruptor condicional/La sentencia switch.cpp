/*
La sentencia switch:
switch(expresión)
{
	case literal1:
		conjunto de instrucciones1:
		break;

	case literal2:
		conjunto de instrucciones2:
		break;

	case literaln:
		conjunto de instruccionesn:
		break;

	default:
		conjunto de instrucciones por defecto;
		break;
}
*/

int main()
{
	int numero;

	cout << "Introduce un numero del 1 al 5: " << endl;
	cin >> numero;

	switch (numero)
	{
	case 1: cout << "El numero es 1"; break;
	case 2: cout << "El numero es 2"; break;
	case 3: cout << "El numero es 3"; break;
	case 4: cout << "El numero es 4"; break;
	case 5: cout << "El numero es 5"; break;
	default: cout << "El numero no esta en el rango de 1-5";
	}

	return 0;
}
