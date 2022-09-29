#include <stdint.h>

class LinkedList
{
    struct Node;
    Node *head;
    Node *tail;

public:

    void append(uint8_t newValue);
    void prepend(uint8_t newValue);
    uint8_t get(uint32_t position);
    uint8_t& operator[](int index);
};
