#pragma once
#include <string>
using namespace std;
class Forward_List;

class Node
{
	friend Forward_List;
public:
	Node();
	Node(string data);
	~Node();
private:
	string data;
	Node* pNext;
};

