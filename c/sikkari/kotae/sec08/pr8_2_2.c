#include <stdio.h>

int main(void)
{
    int age;

    printf("年齢を入力してください＞ ");
    scanf("%d", &age);

    if (age >= 20 && age < 60) {
        printf("あなたは国民年金の被保険者です。\n");
    } 
    else {
        printf("あなたは国民年金の被保険者ではありません。\n");
    }

    return 0;
}
