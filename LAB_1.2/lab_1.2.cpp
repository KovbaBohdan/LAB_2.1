// Lab_02.cpp
// < ����� ������ >
// ����������� ������ � 2.1
// ˳��� ��������.
// ������ 9

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double �;
	double b;
	double z1;
	double z2;

	cout << "a = "; cin >> �;
	cout << "b = "; cin >> b;

	z1 = (cos(�) - cos(b)) * (cos(�) - cos(b)) - (sin(�) - sin(b)) * (sin(�) - sin(b));
	z2 = -4 * sin((� - b) / 2) * sin((� - b) / 2) * cos(� + b);

	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
