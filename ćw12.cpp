#include <iostream>
#include <windows.h>

using namespace std;
/*Zrealizuj ponownie zadanie 10 (sposób dowolny) uwzglêdniaj¹c obramowanie (siatkê), które
musi byd widoczne po uruchomieniu programu.*/

void gotoxy(int x, int y)
{
	COORD c;
	c.X = x - 1;
	c.Y = y - 1;
	SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void komorka(int x, int y)
{
	int i, j;
	char znak;
	
	//lewy gorny naroznik
	znak = 201;
	gotoxy(x,y);
	cout << znak;
	
	//prawy gorny naroznik
	znak = 187;
	gotoxy(x+2,y);
	cout << znak;
	
	//lewy dolny naroznik
	znak = 200;
	gotoxy(x,y+2);
	cout << znak;
	
	//prawy dolny naroznik
	znak = 188;
	gotoxy(x+2,y+2);
	cout << znak;
	
	//slupki
	znak = 205;
	gotoxy(x+1,y);
	cout << znak;
	
	gotoxy(x+1,y+2);
	cout << znak;
	
	znak = 186;
	gotoxy(x,y+1);
	cout << znak;
	
	gotoxy(x+2,y+1);
	cout << znak;
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
		komorka(i*5+1,j*3+2);
		gotoxy(i*5+2, j*3+3);
		cout << tab[i][j] << endl;
	}
	cout << endl;
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
		komorka(i*5+2,j*3+3);
		gotoxy(i*5+3, j*3+4);
		cout << tab[i][j] << endl;
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
