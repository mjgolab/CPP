#include <iostream>

using namespace std;
/*Napisz program w DevC++, kt�ry po uruchomieniu poprosi u�ytkownika o podanie czterech
liczb ca�kowitych, a nast�pnie obliczy wynik poni�szego r�wnania (patrz - wzor).
Sprawd� (np. za pomoc� kalkulatora) czy program wy�wietla prawid�owy wynik.*/

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
