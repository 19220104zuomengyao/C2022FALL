//https://www.acwing.com/problem/content/719/
#include<stdio.h>

int main()
{
    int n, x, y, z;
    scanf("%d", &n);
    int i, arr[46];
    arr[0] = 0;
    arr[1] = 1;
    for (i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}