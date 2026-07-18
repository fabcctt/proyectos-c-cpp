#include <iostream>
void double_value(int *x)
{
    *x = *x * 2;
}
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
int main(void)
{
    int x = 10;
    int y = 5;
    std::cout<<"Before: x="<< x <<", y="<< y <<".\n";
    double_value(&x);
    swap(&x, &y);
    std::cout<<"After: x="<< x <<", y="<< y <<".";
    
    return 0;
}