#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Present.h"
using namespace std;
//Вивід
void Print(Present a)
{
    cout << a.getname() << ' ' << a.getcost() << endl;
}
//Пошук елементів які більші за значення
void gull(Present a, int d)
{
    if (a.getcost() > d)
    {
        Print(a);
    }
}
//зміна ціни
int add_to_cost(Present a,int b)
{
    int asd = a.getcost() + b;
    return asd;
}

int main()
{
    vector<Present> myVec;
    ifstream in("Text.txt");
    while (!in.eof())
    {
        string n;
        int c;
        in >> n;
        in >> c;
        Present a(n, c);
        myVec.push_back(a);
    }

    int d;
    cout << "Enter d" << endl;
    cin >> d;
    for_each(myVec.begin(), myVec.end(), Print);
    cout << endl;

    for (auto i = myVec.begin();i != myVec.end();i++)
    {
        gull(*i, d);
    }

    vector<Present>myVec2;
    cout << endl;
    for (auto i = myVec.begin();i != myVec.end();i++)
    {
       int g = add_to_cost(*i, d);
       Present h(i->getname(), g);
       myVec2.push_back(h);
    }
    myVec = myVec2;
    for_each(myVec.begin(), myVec.end(), Print);

    system("pause");
    return 0;
}
