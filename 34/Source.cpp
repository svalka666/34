// lab_03_4.cpp
// ������� ������ ���㳿���
// ����������� ������ �3.4
// ������������, ������ ������� �������.
// ������19

#include <iostream>
using namespace std;
int main()
{
	double x;
	double y;
	double R;

	cout << "x=  "; cin >> x;
	cout << "y=  "; cin >> y;
	cout << "R=  "; cin >> R;
	//������������ � ���� ����
	if ((y >= -x - 2 * R && y <= 0 && x <= 0) || (R*R<=x*x+y*y && x <= 2 * R && y <= 2 * R && x >= 0 && y >= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}