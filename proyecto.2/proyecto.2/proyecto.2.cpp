#include "plantilla.h"

void log()
{
	string usuario, password;
	int contador = 0;
	bool ingresa = false;
	

	do {
		system("cls");
		gotoxy(35, 6); cout << "*******************************************************";
		gotoxy(35, 7); cout << "*                                                     *";
		gotoxy(35, 8); cout << "*               LOGIN DE ADMINISTRADOR                *";
		gotoxy(35, 9); cout << "*             __________________________              *";
		gotoxy(35, 10); cout << "*                                                     *";
		gotoxy(35, 11); cout << "*     USUARIO:                                        *";
		gotoxy(35, 12); cout << "*     CONTRASEÑA:                                       *";
		gotoxy(35, 13); cout << "*                                                     *";
		gotoxy(35, 14); cout << "*******************************************************" << endl;
		gotoxy(55, 11); cin >> usuario;
		gotoxy(55, 12); cin >> password;

		if (usuario == user && password == pass) {
			ingresa = true;
		}
		else {
			gotoxy(25, 18); cout << "***************************************************************************" << endl;
			gotoxy(25, 19); cout << "**********el usuario o password son incorectos intente nuebamente**********" << endl;
			gotoxy(25, 20); cout << "***************************************************************************" << endl;
			cin.get();
			contador++;
			_getch();
		}
	} while (ingresa == false && contador < 3);
	if (ingresa == false) {
		gotoxy(45, 21); cout << "usted no puede ingresar al sistema" << endl;
		_getch();
	}

}

void enca()
{
	gotoxy(6, 4); cout << "nombre";
	gotoxy(17, 4); cout << "nombre2";
	gotoxy(27, 4); cout << "apellido";
	gotoxy(37, 4); cout << "apellido";
	gotoxy(49, 4); cout << "carnet";
}
void menu() {
	limpiar; system("color f3");
	gotoxy(40, 1); cout << " BIENBENIDO AL SISTEMA";
	gotoxy(15, 6); cout << "1. INGRESO DE PRODUCTO";
	gotoxy(15, 7); cout << "2. VISUALIZAR EXISTENCIAS";
	gotoxy(15, 8); cout << "3. MODIFICAR EXISTENCIAS";
	gotoxy(15, 9); cout << "4. FIN";
	gotoxy(15, 10); cout << "ELIJA UNA OPCION [ ]";
	gotoxy(33, 10); cin >> p1;
}
void ingreso() {
	system("cls"); system("color f3");
	gotoxy(45, 2); cout << "Ingreso de datos";
	enca();
	for (int i = 0; i <= 4; i++)
	{
		gotoxy(6, i + 6); cin >> producto[i].nombre1;
		gotoxy(17, i + 6); cin >> producto[i].nombre2;
		gotoxy(27, i + 6); cin >> producto[i].apellido1;
		gotoxy(37, i + 6); cin >> producto[i].apellido2;
		gotoxy(49, i + 6); cin >> producto[i].Carnert;
		
		
	}
}
void mostrar() {
	system("cls"); system("color f3");
	gotoxy(45, 2); cout << " --Impresion de datos--";
	enca();
	for (int i = 0; i <= 4; i++)
	{
		gotoxy(6, i + 5); cout << producto[i].nombre1;
		gotoxy(17, i + 5); cout << producto[i].nombre2;
		gotoxy(27, i + 5); cout << producto[i].apellido1;
		gotoxy(37, i + 5); cout << producto[i].apellido2;
		gotoxy(49, i + 5); cout << producto[i].Carnert;
	}
	_getch();
}

void modificar() {
	system("cls"); system("color f3");
	gotoxy(43, 1); cout << "--Modificar--";
	gotoxy(2, 3); cout << "      1            2         3         4          5 ";
	enca();
	for (int i = 0; i <= 4; i++)
	{
		gotoxy(2, 5); cout << "0"; gotoxy(2, 6); cout << "1"; gotoxy(2, 7); cout
			<< "2"; gotoxy(2, 8); cout << "3"; gotoxy(2, 9); cout << "4";
		gotoxy(6, i + 5); cout << producto[i].nombre1;
		gotoxy(17, i + 5); cout << producto[i].nombre2;
		gotoxy(27, i + 5); cout << producto[i].apellido1;
		gotoxy(37, i + 5); cout << producto[i].apellido2;
		gotoxy(49, i + 5); cout << producto[i].Carnert;

	}
	gotoxy(10, 14); cout << "Que columna desea modificar ";
	gotoxy(38, 14); cin >> i;
	switch (i)
		do
		{
	case 1:gotoxy(10, 17); cout << "Que linea desea modificar "; cin >> i;
		gotoxy(10, 20);; cout << "Ingrese el dato a cambiar ";
		gotoxy(36, 20); cin >> producto[i].nombre1; break;
	case 2:gotoxy(10, 17); cout << "Que linea desea modificar "; cin >> i;
		gotoxy(10, 20);; cout << "Ingrese el dato a cambiar ";
		gotoxy(36, 20); cin >> producto[i].nombre2; break;
	case 3:gotoxy(10, 17); cout << "Que linea desea modificar "; cin >> i;
		gotoxy(10, 20); cout << "Ingrese el dato a cambiar ";
		gotoxy(36, 20); cin >> producto[i].apellido1; break;
	case 4:gotoxy(10, 17); cout << "Que linea desea modificar "; cin >> i;
		gotoxy(10, 20);; cout << "Ingrese el dato a cambiar ";
		gotoxy(36, 20); cin >> producto[i].apellido2; break;
	case 5:gotoxy(10, 17); cout << "Que linea desea modificar "; cin >> i;
		gotoxy(10, 20);; cout << "Ingrese el dato a cambiar ";
		gotoxy(36, 20); cin >> producto[i].Carnert; break;
		} while (p2 = 7);
}
void main() {
	log();
	do
	{
		system("cls");
		menu();
		switch (p1) {
		case 1: ingreso(); break;
		case 2: mostrar(); break;
		case 3: modificar(); break;
		}
	} while (p1 != 4);
	system("cls"); system("color f3");
	gotoxy(20, 12);
	cout << "FIN DEL PROGRAMA";
	_getch();
}