#include "LinkedList.h"
#include <stdexcept>
		

struct LinkedList::Node
{
    uint8_t data;
    Node *next;
};

LinkedList::Node *LinkedList::createNode(uint8_t newValue)
{
    Node *newNode = new Node;
    newNode->data = newValue;
    newNode->next = nullptr;
    return newNode;
}

void LinkedList::append(uint8_t newValue)
{
    Node *newNode = createNode(newValue);

    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

uint8_t& LinkedList::operator[](int index)
{
    Node *n = head;
    int i = 0;
    while (i != index)
    {
        n = n->next;
        if (n->next == nullptr)
            throw std::invalid_argument("Linked list index out of bounds");
        i++;
    }
    return n->data;
}