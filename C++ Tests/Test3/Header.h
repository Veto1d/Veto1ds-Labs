#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Ingredient
{
private:
	string name;
	double weight;
public:

	void input(istream& in)
	{
		in >> name >> weight;
	}
	string getnamee()
	{
		return name;
	}
	double getweight()
	{
		return weight;
	}
	double setweight()
	{
		weight = weight * 1.1;
	}
};

class Dish
{
private:
	string naming;
	int n;
	Ingredient* ing = new Ingredient[n];
public:
	Dish();
	string getname()
	{
		return naming;
	}
	friend istream& operator >>(istream& in, Dish& p)
	{
		in >> p.naming >> p.n;
		for (int i = 0;i < p.n;i++)
		{
			p.ing[i].input(in);
		}
		return in;
	}
	friend ostream& operator <<(ostream& out, Dish& p)
	{
		out << p.getname() << endl;
		for (int i=0; i<p.n ;i++)
		{
			out << p.ing[i].getnamee() << ' ' << p.ing[i].getweight() << endl;
		}
		return out;
	}
	double operator +(Dish& p)
	{
		double s = 0;
		for (int i = 0;i < n;i++)
		{
			s += p.ing[i].getweight();
		}
		return s;
	}
	friend double operator ++(Dish& p)
	{
		for (int i = 0;i < p.n;i++)
		{
			p.ing[i].setweight();
		}
	}
	
};