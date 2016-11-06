# include <iostream>
# include "Sales_item.h"

int main()
{
    Sales_item item1,item2;
    std::cout<<"Enter 2 sales item with same isbn"<<std::endl;
    std::cin>>item1>>item2;
    std::cout<<"the sum is "<<item1+item2<<std::endl;
    return 0;
}
