// #include <iostream>
// #include <string>
// int main()
// {
//     std::string name = "Krishti Lamichhane";
//     int age = 19;
//     double gpa = 3.98;
//     char grade = 'A';
//     bool isstd = true;
//     std::cout << "Hello" << name << std::endl;
//     std::cout << "Age=" << age << std::endl;
//     std::cout << "gpa=" << gpa << std::endl;
//     std::cout << "grade=" << grade << std::endl;
//     std::cout << "student=" << isstd << std::endl;
//     return 0;
// }
#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "TESTING NOW..." << std::endl;
    std::cout << "Please type your name: ";

    if (!(std::cin >> name))
    {
        return 0;
    }

    std::cout << "It worked! Hello " << name << std::endl;
    return 0;
}