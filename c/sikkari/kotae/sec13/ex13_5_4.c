// 変数の振る舞いの違いを確認するプログラム
#include <stdio.h>

int auto_count(void);
int static_count(void);
int global_count(void);

int count;  // グローバル変数（外部変数）

int main(void)
{
    printf("ローカル変数（自動変数）\t");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", auto_count());
    }

    printf("\n静的ローカル変数\t\t");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", static_count());
    }

    printf("\nグローバル変数（外部変数）\t");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", global_count());
    }
    printf("\n");

    return 0;
}

// ローカル変数（自動変数）で呼び出された回数を数える（数えられない）
int auto_count(void)
{
    int count = 0;  // 明示的に初期化しないと不定値
    count++;        // 自動変数をカウントアップ
    return count;
}

// 静的ローカル変数で呼び出された回数を数える
int static_count(void)
{
    static int count;   // 明示的に初期化しないと0
    count++;            // 静的変数をカウントアップ
    return count;
}

// グローバル変数（外部変数）で呼び出された回数を数える
int global_count(void)
{
    count++;    // グローバル変数をカウントアップ
    return count;
}