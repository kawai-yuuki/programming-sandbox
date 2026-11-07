#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[16];
    char number[16];
    TelephoneBook *next;
} TelephoneBook;

int main(void)
{
    
    //  名前と電話番号を入力
    printf("Input<");
    fgets();
    return EXIT_SUCCESS;
}