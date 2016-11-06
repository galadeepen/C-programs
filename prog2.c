# include <iostream>
# include "Sales_item.h"

int main()
{
    Sales_item item1,item2;
    std::cout<<"Enter 2 sales item whose sum you want"<<std::endl;
    std::cin>>item1>>item2;
    if (item1.same_isbn(item2))
    {
        std::cout<<"the sum is "<<item1+item2<<std::endl;
        return 0;
    }
    else
    {
        std::cerr<<"Please enter items with same isbn "<<std::endl;
        return -1;
    }
}
