//https://www.acwing.com/problem/content/658/
#include<stdio.h>
struct money {
    float value;
    int count;
};
int main()
{
    double n;
    scanf("%lf", &n);
    struct money notas[6] = {
        {100,0},
        {50,0},
        {20,0},
        {10,0},
        {5,0},
        {2,0}
    };
    struct money moedas[6] = {
        {100,0},
        {50,0},
        {25,0},
        {10,0},
        {5,0},
        {1,0}
    };
    int i = 0;
    while (i < 6) {
        while (n >= notas[i].value) {
            n -= notas[i].value;
            notas[i].count++;
        }
        i++;
    }
    i = 0;
    while (i < 6) {
        while (n >= moedas[i].value / 100 - 0.001) {
            n -= moedas[i].value / 100;
            moedas[i].count++;
        }
        i++;
    }
    printf("NOTAS:\n");
    for (i = 0; i < 6; i++) {
        printf("%d nota(s) de R$ %.2lf\n", notas[i].count, notas[i].value);
    }
    printf("MOEDAS:\n");
    for (i = 0; i < 6; i++) {
        printf("%d moeda(s) de R$ %.2lf\n", moedas[i].count, moedas[i].value / 100);
    }
}