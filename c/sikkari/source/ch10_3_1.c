#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[200];
    char str_old[20];
    char str_new[20];
    char result[200];

    int i = 0, j = 0, k = 0;

    printf("3つの文字を入力してください。ただし、空白は含めません。\n");

    printf("置換対象の文字列(最大199文字)> ");
    scanf("%s", str);

    printf("置換前の文字列(最大19文字)> ");
    scanf("%s", str_old);

    printf("置換後の文字列(最大19文字)> ");
    scanf("%s", str_new);

    int len_old = strlen(str_old);
    int len_new = strlen(str_new);

    while (str[i] != '\0') {
        if (strncmp(&str[i], str_old, len_old) == 0) {
            for (j = 0; j < len_new; j++) {
                result[k] = str_new[j];
                k++;
            }
            i += len_old;
        }
        else {
            result[k] = str[i];
            i++;
            k++;
        }
    }
    result[k] = '\0';

    printf("元の文字列      : %s\n", str);
    printf("置換前の文字列  : %s\n", str_old);
    printf("置換後の文字列  : %s\n", str_new);
    printf("置換後の結果    : %s\n", result);

    return 0;

}