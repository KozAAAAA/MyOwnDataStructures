#include <iostream>
#include "LinkedList.h"

int main()
{

    LinkedList mylist;

    mylist.append(0);
    mylist.append(2);
    mylist.append(2);
    mylist.append(2);
    mylist.append(2);
    mylist.insert(4,2);



    for (int i = 0; i < mylist.length(); i++)
    {
        std::cout << (unsigned)mylist[i] << " ";
    }

    std::cout << "\n";
}