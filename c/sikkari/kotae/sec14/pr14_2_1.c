#include <stdio.h>
#include <ctype.h>

char *to_lower_case(char *str);

int main(void)
{
    char str[] = "Hello, World!";
    printf("変換前: %s\n", str);
    printf("変換後: %s\n", to_lower_case(str));
    return 0;
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

