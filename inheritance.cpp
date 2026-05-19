#include <iostream>
#include <string>
class Person
{
public:
    int age;
    std::string name;
    ~Person()
    {
        std::cout << "I am a Parent destructor";
    }
};
class Student : public Person
{
public:
    ~Student()
    {
        std::cout << "Child destructor";
    }

    int roll_no;
    void get_info()
    {
        std::cout << "Name:" << name;
        std::cout << "Rollno:" << roll_no;
    }
};
int main()
{
    Student s1;
    s1.name = "Rahul";
    s1.roll_no = 1234;
    s1.get_info();
    return 0;
}