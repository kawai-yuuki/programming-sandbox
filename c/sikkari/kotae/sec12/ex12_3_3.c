// 文字列を連結するプログラム
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[20] = "every";      // 連結先の配列

    // strcatの例
    char s2[] = "thing";        // 連結する文字列
    if (sizeof(s1) >= (strlen(s1) + strlen(s2) + 1)) {
        strcat(s1, s2);
        printf("strcatの結果：%s\n", s1);
    }
    else {
        printf("連結先配列のサイズ不足です。\n");
    }

    // strncatの例
    char s3[] = " good bye";     // 連結する文字列
    size_t cat_size = 5; 
    if (sizeof(s1) >= (strlen(s1) + cat_size + 1)) {
        strncat(s1, s3, cat_size);
        printf("strncatの結果：%s\n", s1);
    }
    else {
        printf("連結先配列のサイズ不足です。\n");
    }

    return 0;
}
