// scanfで入力を行うプログラム
#include <stdio.h>

int main(void)
{
    char s[100];
    int arr[10];
    char ch;
    double x;
    
    printf("文字列＞ ");
    scanf("%99s", s);
    printf("整数値＞ ");
    scanf("%d", &arr[0]);
    printf("文字＞ ");
    scanf(" %c", &ch);
    printf("実数＞ ");
    scanf("%lf", &x);

    printf("\ns : %s\n", s);
    printf("arr[0] : %d\n", arr[0]);
    printf("ch : %c\n", ch);
    printf("x : %f\n", x);

    return 0;
}