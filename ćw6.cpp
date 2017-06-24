#include <iostream>
#include <windows.h>

using namespace std;
/* Wyœwietl ci¹g liczb: 1,2,3, … , 10 w uk³adzie. */

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
	
	for (i = 1; i <= 10; i++)
	{
		gotoxy(i*2,i);
		cout << i;
	}
	
	return 0;
}
