#include<iostream>
using namespace std;

#define tab "\t"
//const char tab = '\t';

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int Arr[n] = { 3, 5, 8, 13, 21 };

	//���� ��������� �������:

	/*cout << "������� �������� �������: ";
	for (int i = 0; i < 10; i++)
	{
		cin >> Arr[i];
	}*/

	//		����� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
	//		����� ������� �� ����� � �������� �������:
	for (int i = n - 1; i >= 0; i--)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;

	//		������� ����� ��������� �������:
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	cout << "����� ��������� �������: " << sum << endl;
	cout << "������� ��������������:  " << (double)sum / n << endl;

	//		����� ������������ � ������������� ��������:
	int min, max;
	min = max = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < min)min = Arr[i];
		if (Arr[i] > max)max = Arr[i];
	}
	cout << "����������� �������� � �������: " << min << endl;
	cout << "������������ �������� � �������: " << max << endl;

	cout << "\n-------------------------------\n";
	int Brr[] = { 3, 5, 8, 13, 21, 34, 55, 89 };
	for (int i = 0; i < sizeof(Brr)/sizeof(int); i++)
	{
		cout << Brr[i] << tab;
	}
	cout << endl;
}