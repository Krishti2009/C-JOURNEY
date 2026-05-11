#include <iostream>
#include <ctime>
#include <cstdlib>
int main()
{
    srand(time(NULL));
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;
    std::cout << num1;
    std::cout << num2;
    std::cout << num3;
    return 0;
}