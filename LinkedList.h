#include <stdint.h>

class LinkedList
{
    struct Node;
    Node *head;
    Node *tail;

public:

    void append(uint8_t newValue);
    void prepend(uint8_t newValue);
    void insert(uint8_t newValue, int index);
    uint8_t& operator[](int index);
    uint32_t length();

};
