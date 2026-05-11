#include <iostream>
#include <ctime>
#include <cstdlib>
int main()
{
    int num;
    int guess;
    int tries;
    int i = 0;
    srand(time(0));
    num = rand();
    int loop = false;
    do
    {
        std::cout << "Guess the number:";
        std::cin >> guess;
        if (num == guess)
        {
            std::cout << "You guessed right!!";
            break;
        }
        i++;
    } while (loop);
    return 0;
}