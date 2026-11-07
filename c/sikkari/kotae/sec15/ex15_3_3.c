// 入れ子の構造体をポインタで指すプログラム
#include <stdio.h>

// 日付を表す構造体
typedef struct {
    int year;
    int month;
    int day;
} Date;

// 個人情報を表す構造体
typedef struct {
    char name[50];
    Date birth;     // 構造体Dateをメンバとして含む
} Person;

int main(void)
{
    Person person = {"福島太郎", {2005, 5, 23}};
    Person *p = &person;
    
    printf("名前: %s\n", p->name);
    printf("生年月日: %d/%d/%d\n", 
        p->birth.year, p->birth.month, p->birth.day);
    
    return 0;
}
