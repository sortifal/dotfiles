#include <stddef.h>
#include <stdio.h>

void tower_hanoi(unsigned n, char a, char b, char c)
{
    if (n == 0)
    {
        return;
    }
    tower_hanoi(n - 1, a, c, b);
    printf("%c -> %c\n", a, b);
    tower_hanoi(n - 1, c, b, a);
}

void hanoi(unsigned n)
{
    tower_hanoi(n, '1', '3', '2');
}