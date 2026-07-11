#include <iostream>
#include <string>

struct Person {
    std::string name;
    int age;
};

void print_name(Person p)
{
    std::cout << "Name:" << p.name << "\nAge: " << p.age << "\n";
}

void birthday(Person *p)
{
    p->age = p->age + 1;
}

int main(void)
{
    Person p1;
    p1.name = "Fab";
    p1.age = 20;
    print_name(p1);
    birthday(&p1);
    print_name(p1);
    return 0;
}