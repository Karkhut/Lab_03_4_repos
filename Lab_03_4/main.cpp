// Lab_03_4.cpp
// < ������� ���'��� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 11
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R;

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// ������������ � ����� ����
	if (y <= 0 && x <= 0 && y >= -x - R ||
		x >= 0 && y >= 0 && x * x + y * y <= R * R)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}
