#include <iostream>

using namespace std;
/*Napisz program w DevC++, kt�ry sprawdzi jaka istnieje zale�no�d (tylko: <, > lub =) mi�dzy
dwiema liczbami ca�kowitymi wprowadzonymi przez u�ytkownika. Program musi
w jednoznaczny spos�b wy�wietlad wynik.*/

int main()
{
	int liczba1, liczba2;
	cout << "Podaj pierwsza liczbe calkowita: ";
	cin >> liczba1;
	cout << "Podaj druga liczbe calkowita: ";
	cin >> liczba2;
	
	if (liczba1 > liczba2)
	cout << "Liczba " << liczba1 << " jest wieksza od liczby " << liczba2 << ".";
	else if (liczba2 > liczba1)
	cout << "Liczba " << liczba2 << " jest wieksza od liczby " << liczba1 << ".";
	else
	cout << "Liczby sa sobie rowne.";
	
	return 0;
}
