#include <stdio.h>
#include <string.h>

int main(void)
{
    // 果物のリスト
    char fruits[][20] = {
        "Apple", "Banana", "Orange", "Grape", "Strawberry",
        "Mango", "Pineapple", "Avocado", "Kiwi", "Cherry"
    };

    // 配列の要素数を計算
    int count = sizeof(fruits) / sizeof(fruits[0]);

    // バブルソートを使って昇順に並べ替える
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            // strcmpで辞書順比較し、順番が逆の場合は入れ替える
            if (strcmp(fruits[j], fruits[j + 1]) > 0) {
                // ポインタの入れ替え
                char temp[20];
                strcpy(temp, fruits[j]);
                strcpy(fruits[j], fruits[j + 1]);
                strcpy(fruits[j + 1], temp);
            }
        }
    }

    // 結果を表示
    printf("辞書順（昇順）に並べ替えた結果:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\t", fruits[i]);
    }
    printf("\n");

    return 0;
}
