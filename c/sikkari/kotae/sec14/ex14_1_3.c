// memsetとmemcpyを確認するプログラム
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[10];

    // memsetの例:'*'で埋める
    memset(buffer, '*', sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0';
    printf("memset の結果: %s\n", buffer);

    // memcpyの例: 文字列を別の配列にコピー
    char source[] = "Hello, C!";
    char dest[20]; 
    memcpy(dest, source, strlen(source) + 1); // ナル終端込みでコピー
    printf("memcpy の結果: %s\n", dest);

    return 0;
}
