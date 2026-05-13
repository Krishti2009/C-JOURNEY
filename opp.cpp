#include <iostream>
class Cars
{
public:
    std::string make;
    std::string model;
    int year;
    std::string color;
    Cars(std::string make, std::string model, int year, std::string color)
    {
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }

    void accelerate()
    {
        std::cout << "You step on the gas\n";
    }
    void brakes()
    {
        std::cout << "You step on the brakes\n";
    }
};
int main()
{
    Cars car1("Ford", "Mustang", 2023, "Silver");
    std::cout << car1.make;
    std::cout << car1.model;
    std::cout << car1.year;
    std::cout << car1.color;
    return 0;
}