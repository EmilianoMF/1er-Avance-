#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()
{
	int matricula, opcion, articulo;
	char nombre[20];

	cout << "***MENU DE OPCIONES***" << endl;
	cout << " 1) ALTA." << endl;
	cout << "2) MODIFICACIONES" << endl;
	cout << "3) BAJA" << endl;
	cout << "4) LISTA" << endl;
	cout << "5) LIMPIAR PANTALLA" << endl;
	cout << "6) SALIR" << endl;
	cin >> opcion;

	switch (opcion)
	{
	case 1:
		cout << "Ingrese su matricula" << endl;
		cin >> matricula;
		cout << "Ingrese su nombre" << endl;
		cin >> nombre;
		break;

	case 2:
		break;

	case 3:
		break;

	case 4:
		cout << "Favor de elegir el articulo que desea adquirir" << endl;
		cout << "\t1) Mario Kart 8]" << endl;
		cout << "\t2) [Splatoon 3 ]" << endl;
		cout << "\t3) [Animal Crossing]" << endl;
		cin >> articulo;
		break;

	case 5:
		system("cls");
		return main();
		break;

	case 6:
		exit(1);

	default:
		return main();
		break;
	}
}