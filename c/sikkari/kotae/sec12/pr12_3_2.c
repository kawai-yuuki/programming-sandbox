#include <stdio.h>
#include <string.h>

int main(void)
{
    // 動物のリスト
    char *animals[] = {
        "Tiger", "Lion", "Elephant", "Coyote", "Giraffe",
        "Zebra", "Hippopotamus", "Raccoon", "Panda", "Meerkat"
    };
    // 動物のリストの要素数
    int count = sizeof(animals) / sizeof(animals[0]);

    // 初期化
    int large_index = 0;    // 辞書順で一番大きい名前の添字
    int long_index = 0;     // 一番長い名前の添字

    // リストを走査
    for (int i = 1; i < count; i++) {
        // 辞書順での比較
        if (strcmp(animals[i], animals[large_index]) > 0) {
            large_index = i;
        }
        // 長さの比較
        if (strlen(animals[i]) > strlen(animals[long_index])) {
            long_index = i;
        }
    }

    // 結果を出力
    printf("辞書順で一番大きい名前の動物: %s\n", animals[large_index]);
    printf("名前の長さが一番長い動物: %s\n", animals[long_index]);

    return 0;
}
