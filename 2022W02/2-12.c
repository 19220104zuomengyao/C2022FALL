//https://www.acwing.com/problem/content/660/
#include <stdio.h>
#include<math.h>

int main()
{
    double a, b, c, x1, x2;
    scanf("%lf%lf%lf", &a, &b, &c);
    if (b * b - 4 * a * c >= 0 && a != 0)
    {
        x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 / a;
        x2 = (-b - sqrt(b * b - 4 * a * c)) / 2 / a;
        printf("R1 = %.5lf\nR2 = %.5lf", x1, x2);
    }
    else {
        printf("Impossivel calcular");
    }
    return 0;
}