#include <iostream>
#include "LinkedList.h"





int main()
{

    LinkedList mylist;

    mylist.append(2);
    mylist.append(2);
    mylist.append(5);
    mylist.append(2);

    std::cout<<(unsigned)mylist.get(1)<<"\n";

    std::cout<<"done";

}