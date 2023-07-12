#include <iostream>
using namespace std;

/*Дано прямокутну матрицю A[nxm] цілих чисел. Написати функцію, яка створює та повертає масив B розміру n, який містить в собі суми рядків матриці. 
Функція для обчислення суми і-го рядка матриці повинна бути.  
Динамічні масиви.*/

void mas(int** A, int n, int m)\
{
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << "enter elem" << " " << i + 1 << " " << j + 1 << endl;
			cin >> A[i][j];

		}
	}
}

void sum(int** a, int* b, int n, int m)
{
	for (int i = 0;i < n;i++)
	{
		int sum = 0;
		for (int j = 0;j < m;j++)
		{
			sum += a[i][j];
		}
		b[i] = sum;
	}
}

void print(int** a, int* b, int n, int m,bool i)
{
	if (i)
	{
		for (int i = 0;i < n;i++)
		{
			for (int j = 0;j < m;j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
	else
	{
		for (int i = 0;i < n;i++)
		{
			cout << b[i] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int n;
	cout << "Enter n" << endl;
	cin >> n;
	int m;
	cout << "Enter m" << endl;
	cin >> m;
	bool cheak=true;

	int** A;
	int* B = new int[n];
	A = new int* [n];

	for (int i = 0;i < n;i++)
	{
		A[i] = new int[m];
	}

	mas(A, n, m);
	cout << "Matrix A" << endl;
	print(A, B, n, m, cheak);
	sum(A, B, n, m);
	cheak = false;
	cout << "Mass B" << endl;
	print(A, B, n, m, cheak);

	for (int i = 0;i < n;i++)
	{
		delete[] A[i];
	}
	delete[]A;
	delete[]B;
}