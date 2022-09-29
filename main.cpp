#include <iostream>
#include "LinkedList.h"





int main()
{

    LinkedList mylist;

    mylist.append(0);
    mylist.append(1);
    mylist.append(2);
    mylist.append(3);
    std::cout<<(unsigned)mylist[0]<<"\n";
    mylist.prepend(25);
    std::cout<<(unsigned)mylist[0]<<"\n";

    std::cout<<"done";

}