// 個人情報に日付情報を含む構造体
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
    Date birth;     // Date型をメンバとして含む（入れ子の構造体）
} Person;

int main(void)
{
    // 構造体の入れ子を活用した初期化
    Person person = {"福島太郎", {2005, 5, 23}};
    
    printf("名前: %s\n", person.name);
    printf("生年月日: %d/%d/%d\n", 
        person.birth.year, person.birth.month, person.birth.day);
    
    return 0;
}
