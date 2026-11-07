#include <stdio.h>
#include <stdlib.h> // atoiを使用するために必要
#include <string.h> // strchrを使用するために必要

int main(void)
{
    char *number[] = {
        "178", "412.3", "20", "644", "309",
        "750", "196", "162.7", "529", "484"};
    
    int count = sizeof(number) / sizeof(number[0]);
    int sum = 0;

    for (int i = 0; i < count; i++) {
        // 小数点を含んでいるものは除外して加算
        if (strchr(number[i], '.') == NULL) {
            sum += atoi(number[i]);
        }
    }
    printf("整数の合計は%dです。\n", sum);

    return 0;
}