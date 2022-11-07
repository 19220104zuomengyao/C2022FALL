//https://www.acwing.com/problem/content/741/
#include<stdio.h>

int main()
{
    float arr[100];
    int i = 0;
    for (i = 0; i < 100; i++) {
        scanf("%f", &arr[i]);
    }
    for (i = 0; i < 100; i++) {
        if (arr[i] <= 10)
            printf("A[%d] = %.1f\n", i, arr[i]);
    }
    return 0;
}