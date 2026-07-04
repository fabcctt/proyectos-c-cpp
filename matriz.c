#include <stdio.h>
int main(void)
{
    int matriz[3][2] = {
        {1, 2}, {3, 4}, {5, 6}};
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            printf("%d\n", matriz[row][col]);
        }
    }
    return 0;
}
