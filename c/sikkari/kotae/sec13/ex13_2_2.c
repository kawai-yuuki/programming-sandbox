// 引数だけ持つ関数の例
#include <stdio.h>

void greet(int time);

int main(void)
{
    greet(7); // 関数を呼び出す（午前7時想定）
    return 0;
}

// 時間に応じて挨拶を返す関数
void greet(int time)
{
    if (time >= 4 && time < 9) {
        printf("おはよう！\n");
    }
    else if (time >= 9 && time < 16) {
        printf("こんにちは！\n");
    }
    else if (time >= 16 && time < 22) {
        printf("こんばんは！\n");
    }
    else {
        printf("おやすみ！\n");
    }
}
