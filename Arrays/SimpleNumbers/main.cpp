//������� �� ����� ��� ������� ����� �� ���������� � ����������.

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� �����: "; cin >> n;
	bool simple;//???
	for (int i = 0; i <= n; i++)
	{
		simple = true;//����������� ��� ����� �������, �� ��� ����� ����������.
		for (int j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)	//���� ����� �������, �� ������� ��� �� �����.
		{
			cout << i << "\t";
		}
	}
	cout << endl;
}