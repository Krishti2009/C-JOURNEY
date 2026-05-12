#include <iostream>
#include <string>
int find_index(int num_arr[], int size, int num);
int main()
{
    int num_arr[] = {10, 20, 30, 40};
    int size = sizeof(num_arr) / sizeof(num_arr[0]);
    int index;
    int num;
    std::cout << "Enter a number to find:";
    std::cin >> num;
    index = find_index(num_arr, size, num);
    std::cout << "The index is" << index;
    return 0;
}
int find_index(int num_arr[], int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (num == num_arr[i])
        {
            return i;
        }
    }
}
