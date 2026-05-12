#include <iostream>
#include <string>
int getDigit(int num)
{
    return num % 10 + (num / 10 % 10);
}
int even_sum(long long num);
int odd_sum(long long num);
int main()
{
    long long num = 6011000990139494;
    int sum = even_sum(num) + odd_sum(num);
    if (sum % 10 == 0)
    {
        std::cout << "Credit card number is valid:";
    }
    else
    {
        std::cout << "Credit card number is invalid.";
    }
    return 0;
}
int even_sum(long long num)
{
    int sum = 0, count = 0;
    while (num != 0)
    {
        int rem = num % 10;
        count++;
        if (count % 2 == 0)
        {
            sum += getDigit(rem * 2);
        }
        num /= 10;
    }
    return sum;
}
int odd_sum(long long num)
{
    int sum = 0, count = 0;
    while (num != 0)
    {
        int rem = num % 10;
        count++;
        if (count % 2 != 0)
        {
            sum += rem;
        }
        num /= 10;
    }
    return sum;
}