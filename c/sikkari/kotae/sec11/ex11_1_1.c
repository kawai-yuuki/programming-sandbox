// 変数の値とアドレスを表示するプログラム
#include <stdio.h>

int main(void)
{
    int x = 10;
    
    printf("xの値: %d\n", x);
    printf("xのアドレス: %p\n", &x);

    return 0;
}