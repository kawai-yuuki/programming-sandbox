#include <stdio.h>
#define STR_COUNT 5
int main(void)
{
    // 複数の文字列をポインタの配列で管理
    const char *strings[STR_COUNT] = {
        "level", "hello", "madam", "world", "noon"
    };

    for (int i = 0; i < STR_COUNT; i++) {
        const char *start = strings[i]; // 先頭ポインタ
        const char *end = strings[i];   // 末尾ポインタを先頭に初期化

        // 文字列の末尾（ナル文字）を指すまでポインタを進める
        while (*end != '\0') {
            end++;
        }
        end--; // ヌル文字の手前に移動

        // 回文かどうかを判定
        int is_palindrome = 1; // フラグ: 1=回文, 0=回文でない
        while (start < end) {
            if (*start != *end) {
                is_palindrome = 0;
                break;
            }
            start++;
            end--;
        }

        // 結果を表示
        if (is_palindrome) {
            printf("%s: 回文です。\n", strings[i]);
        } else {
            printf("%s: 回文ではありません。\n", strings[i]);
        }
    }

    return 0;
}
