#include "Present.h"

Present::Present()
{
	cost = 0;
}

Present::Present(string n, int c)
{
	name = n;
	cost = c;
}

string Present::getname()
{
	return this->name;
}

int Present::getcost()
{
	return this->cost;
}

int Present::setcost(int a)
{
	cost = a;
	return cost;
}

void Present::Print()
{
	cout << this->name << ' ' << this->cost;
}

