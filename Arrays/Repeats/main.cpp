#include<iostream>
using namespace std;

#define tab "\t"

#define WITH_BOOL_VARIABLE	//��� ������ ������� ����������
//#define WO_BOOL_VARIABLE	//��� ������� ����������

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int Arr[n];
	for (int i = 0; i < n; i++)
	{
		cout << (Arr[i] = rand() % 5) << tab;
	}
	cout << endl;

#ifdef WITH_BOOL_VARIABLE
	for (int i = 0; i < n; i++)
	{
		int repeats = 1;
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (Arr[i] == Arr[j])
			{
				met_before = true;
				break;
			}
		}
		if (!met_before)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (Arr[i] == Arr[j])repeats++;
			}
			if (repeats > 1)
			{
				cout << "�������� " << Arr[i] << " ����������� " << repeats << " ���.\n";
			}
		}
	}
#endif

#ifdef WO_BOOL_VARIABLE
	for (int i = 0; i < n; i++)
	{
		int repeats = 1;
		//���������� ����� ����� �������, ������������ ���������� ��������:
		for (int j = 0; j < i; j++)
		{
			if (Arr[i] == Arr[j])
			{
				repeats++;
			}
		}
		//���� repeats > 1, ������ ��������� �������� Arr[i] ����������� �����, 
		//������ �� � ��� ��� ��������, � ��� ������, ��� �� ��� ������ ������� ���
		//��� �����������.
		if (repeats > 1)continue;

		//���� repeats == 1, �� �� ����� ��� �������� �������, 
		//� ����� ��������� ������� ��� ��� �����������.
		//��� �����, �� � ���������� ������ ����� �������, 
		//������������ ���������� ��������:
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[i] == Arr[j])repeats++;
		}
		if (repeats > 1)
		{
			cout << "�������� " << Arr[i] << " ����������� " << repeats << " ���.\n";
		}
	}
#endif // WO_BOOL_VARIABLE

}