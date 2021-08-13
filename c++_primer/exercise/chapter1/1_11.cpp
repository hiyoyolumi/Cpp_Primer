#include <iostream>

int main()
{
    int a, b;
    std::cout << "Input two nums:";
    std::cin >> a >> b;
    if (a > b) {
        while (b <= a) {
            std::cout << a << " ";
            a--;
        }
    } else if(b > a) {
        while (a <= b) {
            std::cout << a << " ";
            a++;
        }
    }
    std::cout << std::endl;

    return 0;
}