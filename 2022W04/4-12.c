//https://www.acwing.com/problem/content/3454/
#include<stdio.h>
int main() {
    char str[1000];
    char str1[1000];
    str[0] = getchar();
    int i = 0;
    while (str[i] != '\n') {
        i++;
        str[i] = getchar();
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str1[i] = str[i] + 32;
        }
        else {
            str1[i] = str[i];
        }
    }
    int n = i;
    for (i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1;) {
            int count = 1;
            while (str[j + count] < 'A' || (str[j + count] > 'Z' && str[j + count] < 'a') || str[j + count]>'z') {
                count++;
            }
            if (str1[j] > str1[j + count]) {
                char temp = str[j];
                str[j] = str[j + count];
                str[j + count] = temp;
                temp = str1[j];
                str1[j] = str1[j + count];
                str1[j + count] = temp;
            }
            j += count;
        }
    }
    for (i = 0; i < n; i++) {
        printf("%c", str[i]);
    }
}