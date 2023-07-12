#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Present
{
protected:
	string name;
	int cost;
public:
	Present();
	Present(string n, int c);
	string getname();
	int getcost();
	int setcost(int a);
	void Print();
};

