#include<iostream>
using namespace std;

//��������� ��������� �����.

const char tab = '\t';

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int Arr[n];

	int minRand;	//���������� ��������� ��������� �����.
	int maxRand;	//����������� ��������� ��������� �����.
	do
	{
		system("CLS");
		cout << "������� ���������� ��������� ��������� �����: "; cin >> minRand;
		cout << "������� ����������� ��������� ��������� �����: "; cin >> maxRand;
		if (minRand >= maxRand)
		{
			cout << "Error: user lox V_o_O_v" << endl;
			system("PAUSE");
		}
	} while (minRand >= maxRand);

	//		���������� ������� ���������� �������:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	//����� ��������� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << tab;
	}
	cout << endl;

	//����������:
	int iterations = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			iterations++;
			if (Arr[j] < Arr[i])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}

	//����� ���������������� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << tab;
	}
	cout << endl;

	cout << "������ ������������ �� " << iterations << " ��������" << endl;
}