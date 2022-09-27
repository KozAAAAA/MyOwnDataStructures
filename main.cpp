#include <iostream>
#include "LinkedList.h"





int main()
{

    LinkedList mylist;

    mylist.append(0);
    mylist.append(1);
    mylist.append(2);
    mylist.append(3);

    std::cout<<(unsigned)mylist[2]<<"\n";

    std::cout<<(unsigned)mylist.get(1)<<"\n";

    std::cout<<"done";

}