#include <iostream>
#include <cmath>
using namespace std;
/*Дано матрицю A[nxm] цілих чисел.
Отримати матрицю В[nxm], кожен елемент якої=true, якщо сума сусідніх елементів з елементом А[i][j] менше заданої величини S,
та false- у протилежному випадку. 
Написати функцію для написання суми сусідніх елементів. Функцію написати, яка повертає матрицю В. 
Функції для заповнення матриці елементами. 
Функцію для виводу матриці на екран. 
Матриці динамічні.*/

//Заповнення матриці
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

//Вивід матриць
void print(int** A, int n, int m, bool a)
{
	if (a)
	{
		for (int i = 0;i < n;i++)
		{
			for (int j = 0;j < m;j++)
			{
				cout << A[i][j] << " ";
			}
			cout << endl;
		}
	}
	else
	{
		for (int i = 0;i < n;i++)
		{
			for (int j = 0;j < m;j++)
			{
				if (A[i][j] == 1)
				{
					cout << "true" <<" " << " ";
				}
				else
				{
					cout << "false" << " ";
				}
			}
			cout << endl;
		}
	}
}

//Сума сусідніх елементів
int sum(int** A,int n,int m, int i, int j)
{
	int sum = 0;
	if (i == 0 && j == 0)
	{
		sum += A[i + 1][j];
		sum += A[i][j + 1];
	}
	else if (i == n - 1 && j == m - 1)
	{
		sum += A[i][j - 1];
		sum += A[i - 1][j];
	}
	else if (i == n - 1 && j == 0)
	{
		sum += A[i][j + 1];
		sum += A[i - 1][j];
	}

	else if (i == 0 && j == m - 1)
	{
		sum += A[i][j - 1];
		sum += A[i + 1][j];
	}

	else if (i == 0 && j > 0 && j < m)
	{
		sum += A[i][j + 1];
		sum += A[i][j - 1];
		sum += A[i + 1][j];
	}
	else if (i>0 && i<n && j == m - 1)
	{
		sum += A[i - 1][j];
		sum += A[i][j - 1];
		sum += A[i + 1][j];
	}
	else if (i>0 && i<n && j == 0)
	{
		sum += A[i - 1][j];
		sum += A[i][j + 1];
		sum += A[i + 1][j];
	}
	else if (i == n - 1 && j>0 && j<m)
	{
		sum += A[i][j + 1];
		sum += A[i][j - 1];
		sum += A[i - 1][j];
	}
	
	else
	{
		sum += A[i + 1][j];
		sum += A[i - 1][j];
		sum += A[i][j + 1];
		sum += A[i][j - 1];
	}

	return sum;
}
int main()
{
	int n;
	cout << "Enter n" << endl;
	cin >> n;
	int m;
	cout << "Enter m" << endl;
	cin >> m;
	cout << "Max number" << endl;
	int S;
	cin >> S;
	bool cheak = true;
	int** A;
	int** B;

	A = new int* [n];
	B = new int* [n];

	for (int i = 0;i < n;i++)
	{
		A[i] = new int[m];
		B[i] = new int[m];
	}

	mas(A, n, m);
	cout << "Matrix A" << endl;
	print(A, n, m, cheak);

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			if (sum(A, n, m, i, j) >= S)
			{
				B[i][j] = 0;
			}
			else
			{
				B[i][j] = 1;
			}
		}
	}

	cheak = false;
	cout << "Matrix B" << endl;
	print(B, n, m, cheak);


	for (int i = 0;i < n;i++)
	{
		delete[] A[i];
		delete[] B[i];
	}
	delete[] A;
	delete[] B;

	system("pause");
	return 0;
}