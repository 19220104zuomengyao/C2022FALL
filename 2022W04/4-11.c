//https://www.acwing.com/problem/content/3453/
#include<stdio.h>
int main() {
    char str[20];
    int i = 0;
    str[i] = getchar();
    while (str[i] != '\n') {
        i++;
        str[i] = getchar();
    }
    int n = i;
    for (i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%c", str[i]);
    }
}