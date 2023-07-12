#include <iostream>
using namespace std;

int main()
{
	int day1 = 15;
	int day2 = 0;
	int month1 = 9;
	int month2 = 0;
	int year1 = 2001;
	int year2 = 0;
	bool right = true;
	do {
		cout << "Enter day,month,year" << endl;
		cin >> day2;
		cin >> month2;
		cin >> year2;
		if (year2 < 1900 || year2>2100)
		{
			cout << "Wrong year\n";
			right = false;
		}
		if (month2 < 1 || month2>12)
		{
			cout << "Wrong month\n";
			right = false;
		}
		else
		{
			switch (month2)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			{
				if (day2 > 31 || day2 < 1)
				{
					cout << "Wrong day\n";
					right = false;
				}
				break;
			}
			case 4:
			case 6:
			case 9:
			case 11: {
				if (day2 > 30 || day2 < 1)
				{
					cout << "Wrong day\n";
					right = false;
				}
				break;

			}
			case 2:
			{
				if (year2 % 4 == 0)
				{
					if (day2 > 29 || day2 < 1)
					{
						cout << "Wrong day\n";
						right = false;
					}
					else
					{
						if (day2 > 28 || day2 < 1)
						{
							cout << "Wrong day\n";
							right = false;
						}

					}
					break;

				}
			}

			default:
			{
				cout << "Wrong data\n";
				right = false;

				break;

			}
			}

		}
	}
		while (!right);
		cout << "My birthday" << day1 << "." << month1 << "." << year1 << endl;
		cout << "Inputed data" << day2 << "." << month2 << "." << year2 << endl;
		cout << "Task 1" << endl;
		int amount_years = 365 * (year2 - year1) + (year2 - year1) / 4;
		int amount_month = month2 - month1;
		amount_years += amount_month * 31;
		int amount_days = day2 - day1;
		amount_years += amount_days;
		cout << amount_years << endl;
		cout << "Task 2" << endl;
		string week[] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
		int p = 0;
		int k = 1;
		int g = 0;
		for (int i = 2000;i <= year2;i++)	
		{
			g = k;
			if (i == year1)
			{
				p = k;
			}
			cout << i << " " << week[k] << endl;
			if (i % 4 == 0)
			{
				k += 2;
			}
			else
			{
				k += 1;
			}
			k %= 7;
		}
		cout << "Task 3" << endl;
		int d = 0;
		for (int i = 1; i < 13;i++)
		{
			g = g + 12;
			g %= 7;
			
			if (g == 4)
			{
				d++;
			}
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			{
				g = g + 19;
				g %= 7;
			}
			if (i == 4 || i == 6 || i == 9 || i == 11)
			{
				g = g + 18;
				g %= 7;
			}
			if ( i == 2 )
			{
				if (year2 % 4 == 0)
				{
					g = g + 17;
					g %= 7;
				}
				else
				{
					g = g + 16;
					g %= 7;
				}
			}
			

		}
		cout << "Fridays" << "," << d << endl;
		cout << "Task 4" << endl;
		int o = 0;
		cout << year1 << "-" << week[p] << endl;
		for (int i = 1;i <= month1;i++)
		{
			o = p;
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			{
				p = p + 31;
				p %= 7;
			}
			if (i == 4 || i == 6 || i == 9 || i == 11)
			{
				p = p + 30;
				p %= 7;
			}
			if (i == 2)
			{
				if (year1 % 4 == 0)
				{
					p = p + 29;
					p %= 7;
				}
				else
				{
					p = p + 28;
					p %= 7;
				}
			}
			


		}
		
		o = o + day1 - 1;
		o %= 7;
		cout << "My birsday was in" << " " << week[o] << endl;


	system("pause");
	return 0;
}