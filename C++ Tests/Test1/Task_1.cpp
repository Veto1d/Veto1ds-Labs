#include <iostream>
using namespace std;


int main()
{
	const int n = 5;
	int a[n][n];
	int suma = 0;
	int nuls = 0;
	for (int i = 0;i < n;i++)
		//Заповняємо матрицю рандомними числами
	{
		for (int j = 0;j < n;j++)
		{
			a[i][j] = rand() % 2;
		}
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (j > i)
			{
				suma = suma + a[i][j];
			}
		}
	}
	//Виводимо суму елементів які знаходятся вище головної діагоналі
	cout <<"suma="<< suma << endl;
	//шукаємо нулі в матриці по периметру
	for (int j = 0;j < n;j++)
	{
		if (a[0][j] == 0)
		{
			nuls++;
		}
	}
	for (int j = 0;j < n;j++)
	{
		if (a[n-1][j] == 0)
		{
			nuls++;
		}
	}
	for (int i = 1;i < n-1;i++)
	{
		if (a[i][0] == 0)
		{
			nuls++;
		}
	}
	for (int i = 1;i < n-1;i++)
	{
		if (a[i][n-1] == 0)
		{
			nuls++;
		}
	}
	cout << nuls << endl;


	

	
	
	system("pause");
	return 0;

}