#include <stdint.h>

class LinkedList
{
    struct Node;
    Node *head;
    Node *tail;

public:

    Node *createNode(uint8_t newValue);
    void append(uint8_t newValue);
    uint8_t get(uint32_t position);
};
