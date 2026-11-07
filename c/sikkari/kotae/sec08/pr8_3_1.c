#include <stdio.h>

int main(void)
{
    char ch;

    printf("アルファベットを入力してください＞ ");
    scanf(" %c", &ch);

    if (ch == 'a') {
        printf("apple\n");
    } 
    else if (ch == 'b') {
        printf("banana\n");
    } 
    else if (ch == 'c') {
        printf("cherry\n");
    } 
    else {
        printf("tomato\n");
    }

    return 0;
}
