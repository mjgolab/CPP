#include <iostream>
#include <windows.h>

using namespace std;
/*Napisz program, który:
	utworzy i wyœwietli tablicê dwuwymiarow¹ 3x3 wype³nion¹ cyfr¹ 1,
	poprosi o podanie numeru wiersza do zmiany, wype³ni j¹ cyfr¹ 2 i wyœwietli tablicê po
	zmianie,
	obliczy sumê wszystkich elementów le¿¹cych w przek¹tnej tablicy.*/

void gotoxy(int x, int y)
{
	COORD c;
	c.X = x - 1;
	c.Y = y - 1;
	SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main()
{
	int i, j, tab[3][3], nr, suma;
	//wypelnienie tablicy
	for (i = 0; i < 3; i++)
	for (j = 0; j < 3; j++)
	{
		tab[i][j] = 1;
	}
	
	//wyswietlenie tablicy
	cout << "Tablica wyglada nastepujaco:" << endl;
	for (i = 0; i < 3; i++)
	for (j = 0; j < 3; j++)
	{
		gotoxy(i*2+1, j+2);
		cout << tab[i][j] << endl;
	}
	system("pause"); system("cls");
	
	//wiersz do zmiany
	cout << "Wybierz wiersz do zmiany (1-3): ";
	cin >> nr;
	for (i = 0; i < 3; i++)
	{
		tab[i][nr-1] = 2;
	}
	
	//wyswietlenie tablicy po zmianie
	cout << "Tablica po zmianach wyglada nastepujaco:" << endl;
	for (i = 0; i < 3; i++)
	for (j = 0; j < 3; j++)
	{
		gotoxy(i*2+1, j+3);
		cout << tab[i][j];
	}
	
	//suma elementow/wartosci po przekatnej
	suma = 0;
	for (i = 0; i < 3; i++)
	for (j = 0; j < 3; j++)
	{
		i = j;
		suma += tab[i][j];
	}
	cout << endl;
	cout << "Suma elementow po przekatnej wynosi " << suma << ".";
}
