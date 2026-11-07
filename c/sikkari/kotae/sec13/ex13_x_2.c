// 再帰関数で階乗を求めるプログラム
#include <stdio.h>

int fact(int n);

int main(void)
{
    int num = 5;
    printf("%d! = %d\n", num, fact(num));
    return 0;
}

// 階乗を計算する関数
int fact(int n)
{
    if (n > 1) {
        return n * fact(n - 1);
    }
    else {
        return 1;
    }
}


