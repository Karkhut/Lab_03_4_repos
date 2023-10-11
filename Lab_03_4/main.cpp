// Lab_03_4.cpp
// < Кархута Дем'яна >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 11
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R;

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	if (y <= 0 && x <= 0 && y >= -x - R ||
		x >= 0 && y >= 0 && x * x + y * y <= R * R)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}
