//https://www.acwing.com/problem/content/722/
#include<stdio.h>

int main()
{
    int a, b, n;
    scanf("%d %d", &a, &n);
    while (n <= 0)
    {
        scanf("%d", &n);
    }
    b = (2 * a + n - 1) * n / 2;
    printf("%d", b);

    return 0;
}