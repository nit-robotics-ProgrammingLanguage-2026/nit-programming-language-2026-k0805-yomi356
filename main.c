#include <stdio.h>

void divmod(int x, int y, int *q, int *r)
{
    *q = x / y;
    *r = x % y;
}

int main(void)
{
    int x, y;
    int q, r;

    scanf("%d %d", &x, &y);

    if (x <= 0 || y <= 0)
    {
        printf("NG");
        return 0;
    }

    divmod(x, y, &q, &r);

    printf("%d,%d", q, r);

    return 0;
}