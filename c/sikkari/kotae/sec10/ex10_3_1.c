// 複数の文字列を初期化してから表示するプログラム
#include <stdio.h>

int main(void)
{
    char words[][7] = { "Apple", "Banana", "Cherry" };

    // 各文字列を表示
    for (int i = 0; i < 3; i++) {
        printf("文字列%d: %s\n", i + 1, words[i]);
    }

    return 0;
}
