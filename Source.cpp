//Lab_03_1.cpp
//Григоришин Анастасія
//Лабораторна робота №3.1
//Розгалуження , задане формулою:функція однієї змінної
//Варіант 6


#include "iostream"
#include "cmath"

using namespace std;

int main()
{
	int x;
	int e;
	int y;
	int A;
	int B;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "e = "; cin >> e;

	A = 5 * e ^ (3 * x);

	if (x <= -1)
		B = 3 + sin(abs(x));
	if (-1 < x && x <= 3)
		B = 2 * e ^ (x / 4 - 1);
	if (x > 3)
		B = 7 - sqrt(2 * x ^ 3);

	y = A - B;

	cout << endl;
	cout << "1) y = " << y << endl;
	
	if (x <= -1)
		B = 3 + sin(abs(x));
	else
		if (x > 3)
			B = 7 - sqrt(2 * x ^ 3);
		else
			B = 2 * e ^ (x / 4 - 1);
	y = A - B;
	cout << "2) y = " << y << endl;


	cin.get();
	return 0;
}