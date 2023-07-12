#include <iostream>
#include <cmath>
using namespace std;
/*
Дано прямокутну матрицю A[nxm] цілих чисел. Визначити, в якій стрічці матриці знаходиться найбільша кількість симетричних чисел. 
Функція для визначення симетричності числа повинна бути. 
Динамічні масиви.*/

//Ввід матриці
void mas(int** A, int n, int m)
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
// допоміжна функція
int size(int** A, int i, int j)
{
	int size = 0;
	int a = A[i][j];
	while (a > 0)
	{
		a = a / 10;
		size++;
	}
	return size;
}
//Перевірка симетрії
void sum(int** A, int n, int m,int max,int row)
{
	for (int i = 0;i < n;i++)
	{
		int d = 0;
		for (int j = 0;j < m;j++)
		{
			int a = size(A, i, j);
			int f = pow(10, a - 1);
			int b = A[i][j] / f;
			int k = A[i][j] % f;
			int h = 0;
			while (k > 0)
			{
				h = h + (k % 10 * pow(10, a - 2));
				k = k / 10;
				a--;
			}
			if (b == h)
			{
				d++;
			}
			
			
		}
		
		if (d > max)
		{
			max = d;
			row = i;
		}
	}

	cout << row + 1 << " " << " Row have biggest simetrical elements=" << max << endl;
}

int main()
{
	int n;
	cout << "Enter n" << endl;
	cin >> n;
	int m;
	cout << "Enter m" << endl;
	cin >> m;
	int** A;
	A = new int* [n];
	int max_cols = 0;
	int row = 0;

	for (int i = 0;i < n;i++)
	{
		A[i] = new int[m];
	}

	mas(A, n, m);
	sum(A, n, m, max_cols, row);





	for (int i = 0;i < n;i++)
	{
		delete[] A[i];
	}
	delete[]A;
	system("pause");
	return 0;
}