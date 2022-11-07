//https://www.acwing.com/problem/content/818/
#include<stdio.h>

void reverse(int a[], int size)
{
    int i = 0, j = size - 1;
    while (i != j && i != j + 1) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    int a[1000];
    int n, size;
    scanf("%d%d", &n, &size);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    reverse(a, size);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}