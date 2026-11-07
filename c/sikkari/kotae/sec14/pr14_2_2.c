#include <stdio.h>
#include <string.h>

char *reverse_string(char *str);

int main(void)
{
    char str[] = "Hello, World!";

    printf("変換前: %s\n", str);
    printf("変換後: %s\n", reverse_string(str));

    return 0;
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
