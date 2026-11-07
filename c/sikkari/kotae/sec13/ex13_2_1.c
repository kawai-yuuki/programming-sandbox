// 引数も返却値も持たない関数の例
#include <stdio.h>

void greet(void);

int main(void)
{
    greet(); // 関数を呼び出す
    return 0;
}

// 挨拶を表示する関数
void greet(void)
{
    printf("こんにちは！\n");
}
