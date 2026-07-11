#include <iostream>
#include <string>
class Person {
    public:
    std::string name;
    int age;

    void print()
    {
        std::cout << "Name: " << name << "\nAge: " << age << "\n";
    }
};
class Student: public Person {
    public:
    double grade;
    void print_grade()
    {
        std::cout << "Grade: " << grade << "\n";
    }
};
int main(void)
{
    Student s1;
    s1.name = "Luca";
    s1.age = 20;
    s1.grade = 9.5;
    s1.print();
    s1.print_grade();
    return 0;
}