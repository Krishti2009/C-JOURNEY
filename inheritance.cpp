// #include <iostream>
// #include <string>
// class Person
// {
// public:
//     int age;
//     std::string name;
//     ~Person()
//     {
//         std::cout << "I am a Parent destructor";
//     }
// };
// class Student : public Person
// {
// public:
//     ~Student()
//     {
//         std::cout << "Child destructor";
//     }

//     int roll_no;
//     void get_info()
//     {
//         std::cout << "Name:" << name;
//         std::cout << "Rollno:" << roll_no;
//     }
// };
// int main()
// {
//     Student s1;
//     s1.name = "Rahul";
//     s1.roll_no = 1234;
//     s1.get_info();
//     return 0;
// }
#include <iostream>
#include <string>
class Person
{
public:
    std::string name;
    int age;
};
class Student : public Person
{
public:
    int roll_no;
};
class GradStudent : public Student
{
public:
    std::string research;
};
int main()
{
    GradStudent s1;
    s1.name = "Rahul Kumar";
    s1.research = "Cosmology";
    std::cout << "Name:" << s1.name << std::endl;
    std::cout << "Reasearch:" << s1.research;
}
// Multiple inheritance
#include <iostream>
#include <string>
class Student
{
public:
    std::string name;
    int roll_no;
};
class Teacher
{
public:
    std::string subject;
    double salary;
};
class TA : public Student, public Teacher
{
};
int main()
{
    TA t1;
    t1.name = "Chanamati";
    t1.roll_no = 1234;
    t1.subject = "Propulsion";
    t1.salary = 30000;
    std::cout << t1.name << std::endl;
    std::cout << t1.salary;
}