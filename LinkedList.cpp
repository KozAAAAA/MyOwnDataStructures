#include "LinkedList.h"

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

uint8_t LinkedList::get(uint32_t position)
{
    Node *n = head;
    int i = 0;
    while (i != position)
    {
        n = n->next;
        if (n->next == nullptr)
            return 0;
        i++;
    }
    return n->data;
}