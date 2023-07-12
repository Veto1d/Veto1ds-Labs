#pragma once
#include "Node.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Forward_List
{
public:
	Forward_List();
	Forward_List(istream& fin);
	~Forward_List();
	ostream& operator <<(ostream& out);
	void Print(ostream& os)const;
	void PushBack(string data);
	void Reverse();
	void Swapelem();
private:
	Node* head;
	Node* tail;
};

