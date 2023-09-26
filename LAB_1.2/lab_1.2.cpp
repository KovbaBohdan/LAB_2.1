// Lab_02.cpp
// < Ковба Богдан >
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 9

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double с;
	double b;
	double z1;
	double z2;

	cout << "a = "; cin >> с;
	cout << "b = "; cin >> b;

	z1 = (cos(с) - cos(b)) * (cos(с) - cos(b)) - (sin(с) - sin(b)) * (sin(с) - sin(b));
	z2 = -4 * sin((с - b) / 2) * sin((с - b) / 2) * cos(с + b);

	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
