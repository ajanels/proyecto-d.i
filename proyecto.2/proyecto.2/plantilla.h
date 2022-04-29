#pragma once
#ifndef PLANTILLA_H
#include<iostream>
#include<conio.h>
#include<Windows.h>
#define limpiar system ("cls")
#define user "diego"
#define pass "12345"
using namespace std;
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = (SHORT)x - 1;
	coord.Y = (SHORT)y - 1;
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
struct registro {
	char nombre1[10];
	char nombre2[10];
	char apellido1[10];
	char apellido2[10];
	char Carnert[25];
	

}producto[5];
//int empleados [2][5]
int i, col, ren, j;
int p1, p2;
#endif // !PLANTILLA_H
