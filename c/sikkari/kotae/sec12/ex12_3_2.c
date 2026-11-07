// 文字列をコピーするプログラム
#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "Hello, world!";    // コピーする文字列

    // strcpyの例
    char dest1[20];     // コピー先の配列
    if (sizeof(dest1) >= (strlen(src) + 1)) {
        strcpy(dest1, src);
        printf("strcpyの結果：%s\n", dest1);
    }
    else {
        printf("コピー先配列のサイズ不足です。\n");
    }

    // strncpyの例
    char dest2[10] = ""; // コピー先の配列を'\0'でクリア
    size_t copy_size = 5; 
    if (sizeof(dest2) > copy_size) {
        strncpy(dest2, src, copy_size);
        printf("strncpyの結果：%s\n", dest2);
    }
    else {
        printf("コピー先配列のサイズ不足です。\n");
    }

    return 0;
}
