#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Vector
{
public:
	int num=103;
	int* mass = new int[num];
	Vector()
	{
		num = 10;
		for (int i = 0;i < num;i++)
		{
			mass[i] = i;
		}
	}
	Vector(int value)
	{
		num = value;
		for (int i = 0;i < num;i++)
		{
			cout << "enter elem" << endl;
			cin >> mass[i];
		}
	}
	void Coppy(Vector val)
	{
		num = val.num;
		for (int i = 0;i < num;i++)
		{
			mass[i] = val.mass[i];
		}
	}
	void print()
	{
		for (int i = 0;i < num;i++)
		{
			cout << mass[i]<<" ";
		}
		cout << endl;
	}

	~Vector()
	{
		delete[]mass;
	}
};

int main()
{
	Vector A(10);
	A.print();
	Vector B(8);
	B.print();
	string path = "outputs.txt";
	ofstream file;
	file.open(path);
	if (!file.is_open())
	{
		cout << "Wrong file" << endl;
	}
	else
	{
		if (A.num >= B.num)
		{
			int i = 0;
			while (i < B.num)
			{
				A.mass[i] = A.mass[i] + B.mass[i];
				i++;
				
			}
			for (int i = 0;i < A.num;i++)
			{
				file << A.mass[i]<<"\t";
			}
		}
		else
		{
			int i = 0;
			while (i < A.num)
			{
				B.mass[i] = B.mass[i] + A.mass[i];
				i++;
			}
			for (int i = 0;i < B.num;i++)
			{
				file << B.mass[i];
			}

		}
		
	}
	
	file.close();

	return 0;
	//В програмі я реалізував всі умови крім зчитування векторів З файлу замість цього я задаю значення елементів в одному з конструкторів, проте результат записую в файл
}