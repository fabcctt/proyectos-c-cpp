#include <stdio.h>
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
    
    printf("Before: x=%d, y=%d.\n", x, y);
    double_value(&x);
    swap(&x, &y);
    printf("After: x=%d, y=%d", x, y);
    
    return 0;
}