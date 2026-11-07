#include <stdio.h>
#include <ctype.h> // isupperを使用するためのヘッダー

int count_uppercase(const char *str);

int main(void)
{
    char *input = "Hello, World! 123 ABC";
    
    // 大文字の数を計算
    int count = count_uppercase(input);
    
    // 結果を出力
    printf("文字列中の大文字の数: %d\n", count);
    
    return 0;
}

// 文字列中に含まれる大文字の数を返却する関数
int count_uppercase(const char *str)
{
    int count = 0;
    for (int i = 0; *str != '\0'; i++) { // 文字列の終端までループ
        if (isupper(*str)) { // 大文字かどうかを判定
            count++;
        }
        str++;
    }
    return count;
}
