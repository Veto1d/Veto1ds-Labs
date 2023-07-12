#include<iostream>
#include<cmath>
using namespace std;

/*Задано динамічний масив D[n].
Знайти у ньому всі пари взаємопростих чисел.
Повернути відповідну матрицю розміру[2, size], size - кількість пар взаємопростих чисел.
Написати відповідні функції для
заповненя масиву, 
виводу елементів масиву, 
для перевірки чи є два числа взаємопростими*/

int Calculate(int a, int b)
{
	if (a > b)
	{
		while (a >= b)
		{
			a = a - b;
		}
	}
	else
	{
		while (b >= a)
		{
			b = b - a;
		}
	}
	if (a == 0|| b == 0)
	{
		return 0;
	}
	else if (a == 1 || b == 1)
	{
		return 1;
	}
	Calculate(a, b);
}

void Mass(int* mass, int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << "Enter elem" << " " << i + 1 << endl;
		cin >> mass[i];
	}
}

void Print(int** mass, int n, int m)
{
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << mass[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int n = 5;
	int* A;
	A = new int[n];
	int k = 2;
	int m = n*2;
	Mass(A, n);

	int** B;
	B = new int* [k];
	for (int i = 0;i < k;i++)
	{
		B[i] = new int[m];
	}

	int t = 0;
	for (int i = 0;i < n;i++)
	{
		
		for (int j = i + 1;j < n;j++)
		{
			if (Calculate(A[i], A[j]) == 1)
			{
				B[0][t] = A[i];
				B[1][t] = A[j];
				t++;
			}
		}
	}

	Print(B, k, t);

	for (int i = 0;i < k;i++)
	{
		delete[] B[i];
	}
	delete[] B;

	delete[] A;
	return 0;
}