#include <iostream>
#include "findInVector.h"

int main()
{
    std::vector<int> myvec = { 1, 2, 3 };
    std::cout << utils::findInVector(myvec, 2) << std::endl;

    return 0;
}
