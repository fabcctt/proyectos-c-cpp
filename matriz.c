#include <stdio.h>
int main(void)
{
    int matriz[3][2] = {
        {1, 2}, {3, 4}, {5, 6}};
    for (int row = 0; fila < 3; row++)
    {
        for (int columne = 0; columne < 2; columne++)
        {
            printf("%d\n", matriz[row][columne]);
        }
    }
    return 0;
}
