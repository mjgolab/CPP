#include <iostream>
#include <windows.h>

using namespace std;
/* Napisz program w DevC++, kt�ry sprawdzi czy wprowadzona przez u�ytkownika liczba
ca�kowita jest podzielna przez 7. Program musi odpowiednio wy�wietlad napis: "Liczba �
jest podzielna przez 7" lub "Liczba � nie jest podzielna przez 7" */
int main()
{
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	
	if (liczba % 7 == 0)
	cout << "Liczba " << liczba << " jest podzielna przez 7.";
	else
	cout << "Liczba " << liczba << " nie jest podzielna przez 7.";
	getchar();
	return 0;
}

