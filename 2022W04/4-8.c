//https://www.acwing.com/problem/content/742/
#include<stdio.h>

int main()
{
    int arr[20], i = 0;
    for (i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }
    i = 0;
    int j = 19;
    while (i != j && i != j + 1) {
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, arr[i]);
    }
}