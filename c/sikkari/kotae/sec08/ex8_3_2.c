// if文の入れ子を使って三角形の形を判定するプログラム
#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("3辺の長さを入力してください＞ ");
    scanf("%d%d%d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if (a == b && b == c) {
            printf("正三角形です。\n");
        } 
        else if (a == b || a == c || b == c) {
            printf("二等辺三角形です。\n");
        } 
        else {
            printf("不等辺三角形です。\n");
        }
    } 
    else {
        printf("三角形を構成できません。\n");
    }

    return 0;
}
