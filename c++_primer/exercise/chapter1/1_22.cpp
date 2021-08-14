#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item_val;
    Sales_item item_sum;

    while (std::cin >> item_val)
    {
        item_sum += item_val;
    }
    std::cout << item_sum << std::endl;

    return 0;
}