// 変数を文字列に変換した後、読み取るプログラム
#include <stdio.h>

int main(void)
{
    char buffer[100];
    int a = 42, b = 64;
    double x = 3.14;

    // snprintfで、変数の値を文字列としてbufferに格納
    snprintf(buffer, sizeof(buffer), "a=%d, b=%d, x=%.2f", a, b, x);
    printf("生成された文字列: %s\n", buffer);

    // sscanfで、bufferから値を抽出
    int a2, b2;
    double x2;
    int ret = sscanf(buffer, "a=%d, b=%d, x=%lf", &a2, &b2, &x2);
    
    if (ret == 3) {
        printf("読み取った値: a = %d, b = %d, x = %.2f\n", a2, b2, x2);
    } else {
        printf("文字列からの値の読み取りに失敗しました。\n");
    }

    return 0;
}
