#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f;
    double x, y;

    // 係数の入力
    printf("a, b, c, d, e, fの値を入力してください。\n");
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    
    // 解を計算
    x = (double)(c * e - b * f) / (a * e - b * d);
    y = (-a * x + c) / b;

    printf("x = %f, y = %f\n", x, y);

    return 0;
}
