#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int is_palindrome (const char *str);
char *to_lower_case(char *str);
char *reverse_string(char *str);

int main(void)
{
    // 2次元配列に複数の文字列を格納
    char strings[][10] = {
        "Level",
        "Hello",
        "Racecar",
        "World",
        "Madam"
    };
    int count = sizeof(strings) / sizeof(strings[0]);

    // 各文字列について回文判定を行う
    for (int i = 0; i < count; i++) {
        if (is_palindrome(strings[i])) {
            printf("\"%s\" は回文です。\n", strings[i]);
        } else {
            printf("\"%s\" は回文ではありません。\n", strings[i]);
        }
    }

    return 0;
}

// 回文か否かを返す関数
int is_palindrome(const char *str)
{
    if (str == NULL) {
        // ポインタがNULLなら回文判定できないので0を返す
        return 0;
    }

    // +1してナル文字分も確保する
    size_t length = strlen(str) + 1;

    // 小文字変換用の作業領域
    char *lower_str = (char *)malloc(length);
    if (lower_str == NULL) {
        printf("メモリ確保に失敗しました。\n");
        // 回文判定不可なので0を返す
        return 0;
    }

    // 逆順用の作業領域
    char *rev_str = (char *)malloc(length);
    if (rev_str == NULL) {
        free(lower_str);
        printf("メモリ確保に失敗しました。\n");
        // 回文判定不可なので0を返す
        return 0;
    }

    // コピーを作成
    strcpy(lower_str, str);
    strcpy(rev_str, str);

    // lower_strを小文字変換
    to_lower_case(lower_str);

    // rev_strを小文字変換してから逆順に変換（チェーン操作）
    reverse_string(to_lower_case(rev_str));

    // 判定：小文字変換後の元文字列と逆順文字列が一致すれば回文
    int ret = 0;
    if (strcmp(lower_str, rev_str) == 0) {
        ret = 1;
    }

    // 編集用のメモリを解放
    free(lower_str);
    free(rev_str);

    return ret;
}

// 英大文字を小文字に変換する関数
char *to_lower_case(char *str)
{
    if (str == NULL) {
        return str; // ポインタがNULLならそのままリターン
    }

    char *p = str;
    while (*p != '\0') {
        // tolowerは英大文字のみ小文字に変換
        *p = tolower(*p);
        p++;
    }
    return str;  // 引数で渡されたポインタをそのまま返す
}

// 文字列を逆順に並び替える関数
char *reverse_string(char *str)
{
    if (str == NULL) {
        return str; // ポインタがNULLならそのままリターン
    }

    int len = (int)strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    return str;  // 引数で渡されたポインタをそのまま返す
}
