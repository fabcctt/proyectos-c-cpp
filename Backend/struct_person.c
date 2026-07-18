#include <stdio.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
};

void print_person(struct Person p)
{
    printf("Name: %s\nAge: %d\n", p.name, p.age);
}

void birthday(struct Person *p)
{
    p->age = p->age + 1;
}

int main(void)
{
    struct Person p1;
    strcpy(p1.name, "Person");
    p1.age = 20;
    print_person(p1);
    birthday(&p1);
    print_person(p1);
    return 0;
}