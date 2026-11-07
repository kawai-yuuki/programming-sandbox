// 構造体の配列をアドレス渡しする関数
#include <stdio.h>

// 個人情報を表す構造体
typedef struct {
    char name[20];  // 名前
    int age;        // 年齢
} Person;

void update_ages(Person *person, int size);
void print_person(const Person *person, int size);

int main(void)
{
    Person person[] = {
        {"青森 一朗", 18},
        {"岩手 次郎", 19},
        {"秋田 三郎", 20}
    };
    int size = sizeof(person) / sizeof(person[0]);

    printf("更新前\n");
    print_person(person, size);

    update_ages(person, size);

    printf("\n更新後\n");
    print_person(person, size);

    return 0;
}

// 年齢を1加算する関数
void update_ages(Person *p, int size)
{
    for (int i = 0; i < size; i++) {
        (p + i)->age += 1;
    }
}

// 個人情報を表示する関数
void print_person(const Person *p, int size)
{
    for (int i = 0; i < size; i++) {
        printf("%s %d歳\n", (p + i)->name, (p + i)->age);
    }
}
