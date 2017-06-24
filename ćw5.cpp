#include <iostream>

using namespace std;
/*Napisz program w DevC++, który po uruchomieniu poprosi u¿ytkownika o podanie czterech
liczb ca³kowitych, a nastêpnie obliczy wynik poni¿szego równania (patrz - wzor).
SprawdŸ (np. za pomoc¹ kalkulatora) czy program wyœwietla prawid³owy wynik.*/

int main()
{
	double u, v, w, z;
	double wzor;
	cout << "Podaj pierwsza liczbe calkowita: ";
	cin >> u;
	cout << "Podaj druga liczbe calkowita: ";
	cin >> v;
	cout << "Podaj trzecia liczbe calkowita: ";
	cin >> w;
	cout << "Podaj czwarta liczbe calkowita: ";
	cin >> z;
	
	wzor = (3 * u - 4 * v) / (-4 * w + 5 * z);
	cout << "Rownanie wynosi: " << wzor << ".";
	
	return 0;
}
