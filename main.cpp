#include <iostream>


class linkedList
{
    struct Node;
    Node* head = nullptr;
    Node* tail = nullptr;

    struct Node
    {
        uint8_t data;
        Node* next;
    };

    public:

    Node* createNode(uint8_t newValue)
    {
        Node* newNode = new Node;
        newNode->data = newValue;
        newNode->next = nullptr;
        return newNode;
    }

    void append(uint8_t newValue)
    {
        Node* newNode = createNode(newValue);
        
        if(head == nullptr)
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

    void print()
    {
        Node* n = head;
        while(n!=nullptr)
        {
            std::cout<<(unsigned)n->data<<"\n";
            n=n->next;
        }
    }

    int get(uint32_t position)
    {
        Node* n = head;
        int i=0;
        while (i!=position)
        {
            n=n->next;
            if(n->next == nullptr) return 0;
            i++;
        }
        return n->data;
    }
};






int main()
{

    linkedList mylist;

    mylist.append(2);
    mylist.append(2);
    mylist.append(5);
    mylist.append(2);

    mylist.print();

    std::cout<<mylist.get(2)<<"/n";

    std::cout<<"done";

}