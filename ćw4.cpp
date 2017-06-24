#include <iostream>

using namespace std;
/*Napisz program w DevC++, który sprawdzi jaka istnieje zale¿noœd (tylko: <, > lub =) miêdzy
dwiema liczbami ca³kowitymi wprowadzonymi przez u¿ytkownika. Program musi
w jednoznaczny sposób wyœwietlad wynik.*/

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
