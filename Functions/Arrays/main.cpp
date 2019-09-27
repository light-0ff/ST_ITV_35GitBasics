#include<iostream>
using namespace std;

const int ROWS = 4;	//Êîëè÷åñòâî ñòðîê äâóìåðíîãî ìàññèâà
const int COLS = 5;	//Êîëè÷åñòâî ýëåìåíòîâ ñòðîêè
 
void FillRand(int Arr[], const int n);
void FillRand(double Arr[], const int n);
void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int Arr[], const int n);
void Print(double Arr[], const int n);
void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int Arr[], const int n);
void Sort(int Arr[ROWS][COLS], const int ROWS, const int COLS);

int  Sum(int Arr[], const int n);
double Avg(int Arr[], const int n);
int  minValueIn(int Arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int Arr[n];

	FillRand(Arr, n);
	Print(Arr, n);
	cout << "Ñóììà ýëåìåíòîâ ìàñèâà:\t" << Sum(Arr, n) << endl;
	cout << "Ñðåäíåå àðèôìåòè÷åñêîå:\t" << Avg(Arr, n) << endl;
	//cout << "Ìèíèìàëüíîå çíà÷åíèå â ìàññèâå:\t" << minValueIn(Arr, n) << endl;

	double Brr[n];
	FillRand(Brr, n);
	Print(Brr, n);

	int Crr[ROWS][COLS];
	FillRand(Crr, ROWS, COLS);
	Print(Crr, ROWS, COLS);
}

void FillRand(int Arr[], const int n)
{
	//Çàïîëíåíèå ñëó÷àéíûìè ÷èñëàìè:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
	}
}
void FillRand(double Arr[], const int n)
{
	//Çàïîëíåíèå ñëó÷àéíûìè ÷èñëàìè:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 10000;
		Arr[i] /= 100;
	}
}

void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 100;
		}
	}
}

void Print(int Arr[], const int n)
{
	//Âûâîä ìàññèâà íà ýêðàí:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
void Print(double Arr[], const int n)
{
	//Âûâîä ìàññèâà íà ýêðàí:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}

void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Sort(int Arr[], const int n)
{
	//Ñîðòèðîâêà ìàññèâà:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}

void Sort(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	
}

int  Sum(int Arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += Arr[i];
	}
	return Sum;
}

double Avg(int Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}

//int  minValueIn(int Arr[], const int n)
//{
//	int min = Arr[0];
//
//}
