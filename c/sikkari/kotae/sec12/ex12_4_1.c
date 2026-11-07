// 入力文字列に大文字が含まれていないことを検査するプログラム
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[100];

    printf("文字列を入力してください＞ ");
    scanf("%99s", str);

    int is_upper = 0;   // 0:大文字が含まれていない  1:大文字が含まれている
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            is_upper = 1;
            break;
        }
    }
    if (is_upper == 1){
        printf("大文字が含まれています。\n");
    }
    else {
        printf("大文字は含まれていません。\n");
    }
    
    return 0;
}
