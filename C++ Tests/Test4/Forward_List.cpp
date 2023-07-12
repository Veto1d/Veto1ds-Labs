#include "Forward_List.h"
using namespace std;

Forward_List::Forward_List()
{
	this->head = nullptr;
	this->tail = nullptr;
}

Forward_List::Forward_List(istream& fin)
{
	this->head = nullptr;
	this->tail = nullptr;
	string data;
	while (!fin.eof())
	{
		fin >> data;
		PushBack(data);
	}
}

Forward_List::~Forward_List()
{
}

ostream& Forward_List::operator<<(ostream& out)
{
	Node* ptr;
	ptr = this->head;
	while (ptr != nullptr)
	{
		out << ptr->data << ' ';
		ptr = ptr->pNext;
	}
	out << endl;
	return out;
}

void Forward_List::Print(ostream& os) const
{
	Node* ptr;
	ptr = this->head;
	while (ptr != nullptr)
	{
		os << ptr->data << ' ';
		ptr = ptr->pNext;
	}
	os << endl;
}

void Forward_List::PushBack(string data)
{
	Node* ptr;
	if (!this->head)
	{
		this->head = new Node;
		this->head->data = data;
		this->head->pNext = nullptr;
		this->tail = this->head;
		return;
	}
	else
	{
		ptr = this->head;
		while (ptr->pNext)
		{
			ptr = ptr->pNext;
		}
		Node* newNode = new Node;
		newNode->data = data;
		newNode->pNext = nullptr;
		ptr->pNext = newNode;
		this->tail = ptr->pNext;
		return;
	}
}

void Forward_List::Reverse()
{
	Node* ptr = new Node;
	Node* ptr1 = new Node;
	cout << this->tail->data << ' ';
	ptr1 = this->tail;
	while (ptr1 != head)
	{
		ptr = this->head;
		while (ptr->pNext != ptr1)
		{
			ptr = ptr->pNext;
		}
		cout << ptr->data << ' ';
		ptr1 = ptr;

	}
	cout << this->head->data << endl;
	
}

void Forward_List::Swapelem()
{
	Node* ptr = new Node;
	Node* ptr1 = new Node;
	string g;
	ptr = this->head;
	ptr1 = this->head->pNext;
	while (ptr1 != nullptr)
	{
		g = ptr->data;
		ptr->data = ptr1->data;
		ptr1->data = g;
		ptr = ptr1->pNext;
		ptr1 = ptr1->pNext;
		ptr1 = ptr1->pNext;
	}
}

