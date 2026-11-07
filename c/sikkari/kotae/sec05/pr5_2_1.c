#include <stdio.h>

int main(void) 
{
    char initial;   // イニシャル
    int age;        // 年齢
    double height;  // 身長
    char name[50];  // 名前

    // データの入力
    printf("名前を入力してください＞ ");
    scanf("%49s", name);
    printf("イニシャルを入力してください＞ ");
    scanf(" %c", &initial);
    printf("年齢を入力してください＞ ");
    scanf("%d", &age);
    printf("身長を入力してください（単位：cm）＞ ");
    scanf("%lf", &height);

    // 入力されたデータを出力します
    printf("\n入力された情報:\n");
    printf("名前: %s\n", name);
    printf("イニシャル: %c\n", initial);
    printf("年齢: %d\n", age);
    printf("身長: %.2f cm\n", height);

    return 0;
}
