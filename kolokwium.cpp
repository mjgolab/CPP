#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y)
{
	COORD c;
	c.X = x - 1;
	c.Y = y - 1;
	SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main() //Imiê i nazwisko - Marcin Go³êbiewski.
{
	int liczba1, liczba2, tab[2][3], tab2[2][3] = {{1,0},{1,0}}, suma;
	char znak;
do {	
	cout << "Wprowadz dwie liczby calkowite z przedzialu (0, 10):" << endl;
	cout << endl;
	cout << "Podaj pierwsza wartosc: ";
	cin >> liczba1;
	cout << "Podaj druga wartosc: ";
	cin >> liczba2;
	cout << endl;
	
		if ((liczba1 > 0) && (liczba1 < 10))
		{
			if (liczba1 % 2 == 0)
			{	
				cout << "Pierwsza liczba jest parzysta." << endl;
			}
			else
			{
				cout << "Pierwsza liczba jest nieparzysta." << endl;
			}
		}
		else
		{
			cout << "Pierwsza liczba jest z poza zakresu." << endl;
		}
		if ((liczba2 > 0) && (liczba2 < 10))
		{
			if (liczba2 % 2 == 0)
			{	
				cout << "Druga liczba jest parzysta." << endl;
			}
			else
			{
				cout << "Druga liczba jest nieparzysta." << endl;
			}
		}
		else
		{
			cout << "Druga liczba jest z poza zakresu." << endl;
		}
	cout << endl;
	cout << endl;
	
	//wypelnia tablice
	int i, j;
	for (i = 0; i < 2; i++)
	for (j = 0; j < 3; j++)
	{
		tab[i][j] = 0;
	}
	
	//wprowadza liczby
	if ((liczba1 > 0) && (liczba1 < 10))
	if ((liczba2 > 0) && (liczba2 < 10))
	{
		tab[0][2] = liczba1;
		tab[1][2] = liczba2;
		tab2[0][2] = liczba1;
		tab2[1][2] = liczba2;
	}
	
	//wyswietla tablice
	if ((liczba1 > 0) && (liczba1 < 10))
	if ((liczba2 > 0) && (liczba2 < 10))
		for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
		{
			gotoxy(i*4+2,j*3+9);
			cout << tab[i][j];
			gotoxy(i*4+14,j*3+9);
			cout << tab2[i][j];
		}
	suma = 0;
	for (j = 0; j < 3; j++)
	{
		suma += tab2[1][j];
		cout << endl;
	}
	gotoxy(i*5+3, j*3+8); cout << "SUMA = " << suma;
	cout << endl;
	cout << "Czy chcesz uruchomic program ponownie (t/n) ?";
	cin >> znak;
	system("cls");
	} while (znak == 't');
}
