#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item_sum;
    Sales_item item_val, item_cur;

    if (std::cin >> item_cur)
    {
        item_sum = item_cur;
        while (std::cin >> item_val)
        {
            if (item_val.isbn() == item_cur.isbn())
            {
                item_sum += item_val;
            }
            else
            {
                std::cout << item_sum << std::endl;
                item_sum = item_val;
                item_cur = item_val;
            }
        }
        std::cout << item_sum << std::endl;
    }
    else
    {
        std::cout << "No Data?" << std::endl;
        return -1;
    }

    return 0;
}