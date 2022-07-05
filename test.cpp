#include <iostream>
#include <string>
#include <array>
#include <vector>

int main()
{
    std::array<int, 5> myArray = { 9, 7, 5, 3, 1 };
    std::size_t length(myArray.size());
    int *begin(&myArray[0]);
    int *end(begin + length);
    for (int *ptr(begin); ptr != end ; ptr++)
        std::cout << *ptr;
}
