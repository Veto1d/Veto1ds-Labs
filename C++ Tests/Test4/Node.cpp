#include "Node.h"

Node::Node()
{
}

Node::Node(string data)
{
	this->data = data;
	this->pNext = nullptr;
}

Node::~Node()
{
}
