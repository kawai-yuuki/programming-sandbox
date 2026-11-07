// printfの%sと%pで出力を行うプログラム
#include <stdio.h>

int main(void)
{
    char s1[] = "hello world";
    char *s2 = "Hello World";

    printf("s1の指す文字列 : %s\n", s1);
    printf("s2の指す文字列 : %s\n", s2);

    printf("s1のアドレス : %p\n", s1);
    printf("s2のアドレス : %p\n", s2);

    return 0;
}