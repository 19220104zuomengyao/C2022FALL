#include <stdio.h>
int main()
{
    int a, b, temp=0;
    scanf("%d%d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    a = temp;
    b = a;
    temp = b;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}