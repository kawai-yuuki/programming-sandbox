// コマンドライン引数を受け取るプログラム
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("引数の数: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0;
}