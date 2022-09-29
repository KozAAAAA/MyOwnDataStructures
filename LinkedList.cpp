#include "LinkedList.h"
#include <stdexcept>
		

struct LinkedList::Node
{
    uint8_t data;
    Node *next;
};


void LinkedList::append(uint8_t newValue)
{
    Node *newNode = new Node;
    newNode->data = newValue;
    newNode->next = nullptr;

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

void LinkedList::prepend(uint8_t newValue)
{
    Node *next = head;
    Node *newNode = new Node;
    newNode->data = newValue;
    newNode->next = next;
    head = newNode;
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