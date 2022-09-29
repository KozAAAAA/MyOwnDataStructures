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
    }
    else
    {
        Node *n = head;
        while (n->next != nullptr)
        {
            n = n->next;
        }
        n->next = newNode;
    }
}

void LinkedList::prepend(uint8_t newValue)
{
    Node *newNode = new Node;
    newNode->data = newValue;
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void LinkedList::insert(uint8_t newValue, int index)
{
    if (index == 0)
    {
        this->prepend(newValue);
        return;
    }

    Node *newNode = new Node;
    newNode->data = newValue;
    Node *n = head;
    int i = 0;
    while (i < index - 1)
    {
        n = n->next;
        if (n == nullptr)
            throw std::invalid_argument("Linked list index out of bounds");
        i++;
    }

    newNode->next = n->next;
    n->next = newNode;
}

uint8_t &LinkedList::operator[](int index)
{
    Node *n = head;
    int i = 0;
    while (i != index)
    {
        n = n->next;
        if (n == nullptr)
            throw std::invalid_argument("Linked list index out of bounds");
        i++;
    }
    return n->data;
}

uint32_t LinkedList::length()
{
    Node *n = head;
    uint32_t size = 0;
    while (n != nullptr)
    {
        n = n->next;
        size++;
    }
    return size;
}