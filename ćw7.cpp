#include <iostream>
#include <windows.h>

using namespace std;
/*Wyswietl gwiazdki zgodnie ze wzorem.*/

void gotoxy(int x, int y)
{
	COORD c;
	c.X = x - 1;
	c.Y = y - 1;
	SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main()
{
	int i;
	//górny wiersz
	for (i = 1; i <= 5; i++)
	{
		gotoxy(i, 1); // 1,1 ; 2,1; 3,1; 4,1; 5,1; pierwszy wiersz, x kolumna.
		cout << "*";
	}
	
	//dolny wiersz
	for (i = 1; i <= 5; i++)
	{
		gotoxy(i, 5);
		cout << "*";
	}
	
	//pierwsza kolumna
	for (i = 1; i <= 5; i++)
	{
		gotoxy(1, i);
		cout << "*";
	}
	
	//pi¹ta kolumna
	for (i = 1; i <= 5; i++)
	{
		gotoxy(5, i);
		cout << "*";
	}
	
	//odwrocona przekatna
	for (i = 1; i <= 5; i++)
	{
		gotoxy(5 - i, i + 1);
		cout << "*";
	}
}
