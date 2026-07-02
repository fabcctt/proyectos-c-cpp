#include <stdio.h>
int main(void)
{
    int matriz[3][2] = {
        {1, 2}, {3, 4}, {5, 6}};
    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 2; columna++)
        {
            printf("%d\n", matriz[fila][columna]);
        }
    }
    return 0;
}
