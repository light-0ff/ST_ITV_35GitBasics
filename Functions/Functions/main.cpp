#include<iostream>
using namespace std;

int add(int a, int b);	//�������� ������� (Function declaration - ���������� �������).
int sub(int a, int b);
int mul(int a, int b);
double div_(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a = 2;
	int b = 3;
	int c = add(a, b);	//����� (�������������) ������� - Function call.
	cout << a << " + " << b << " = " << c << endl;;
	cout << sub(8, 3) << endl;
	cout << mul(5, 3) << endl;
	cout << div_(5, 2) << endl;
	cout << add(123, 456) << endl;
}

int add(int a, int b)	//���������� ������� (Function definition - ����������� �������)
{
	int c = a + b;
	return c;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	//���������
	return a * b;
}

double div_(int a, int b)
{
	//�������
	double c = (double)a / b;
	return c;
}



/*
	Function doesn't take N arguments
	too few arguments in function call - ���� �� �������� ������ ����������, ��� ������� ���������;
	too many arguments in function call - 


	(LNK - Link)
	UNRESOLVED EXTERNAL SYMBOL FOUND
*/