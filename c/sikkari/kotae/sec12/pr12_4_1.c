#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int upper_count = 0;  // 英大文字の個数
    int lower_count = 0;  // 英小文字の個数
    int digit_count = 0;  // 数字の個数
    int other_count = 0;  // その他の文字の個数
    int c;                // 入力文字（int型で取得）

    printf("文字を入力してください。（終了条件: Ctrl+Z）\n");

    // 1文字ずつ入力を処理
    while ((c = getchar()) != EOF) {
        if (isupper(c)) {   // 英大文字か？
            upper_count++;
        } else if (islower(c)) {    // 英小文字か？
            lower_count++;
        } else if (isdigit(c)) {    // 数字か？
            digit_count++;
        } else if (!isspace(c)) {   // 空白類文字でないか？
            other_count++;
        }
    }

    // 結果を表示
    printf("\n文字種別ごとの個数\n");
    printf("英大文字: %d\n", upper_count);
    printf("英小文字: %d\n", lower_count);
    printf("数字: %d\n", digit_count);
    printf("その他: %d\n", other_count);

    return 0;
}
