#include <stdio.h>

#define STUDENT_COUNT 6 // 学生数

// 学生の身体情報を表す構造体
typedef struct {
    int id;         // 番号
    char name[20];  // 氏名
    double height;  // 身長
    double weight;  // 体重
} Student;

Student find_student_by_id(const Student *students, int size, int id);

int main(void)
{
    // 構造体の配列を定義（6人の学生情報を格納）
    Student students[STUDENT_COUNT] = {
        {1, "青森 一朗", 168.3, 70.3},
        {2, "岩手 次郎", 175.5, 65.3},
        {3, "秋田 三郎", 165.2, 56.4},
        {4, "宮城 史郎", 160.5, 58.0},
        {5, "山形 吾朗", 174.3, 89.4},
        {6, "福島 太郎", 186.3, 78.3}
    };

    int search_id;
    printf("検索する学生のIDを入力してください＞ ");
    scanf("%d", &search_id);

    // 学生を検索
    Student result = find_student_by_id(students, STUDENT_COUNT, search_id);

    // 結果を表示
    if (result.id == -1) {
        printf("該当する学生が見つかりません。\n");
    } else {
        printf("ID: %d\n", result.id);
        printf("名前: %s\n", result.name);
        printf("身長: %.1f cm\n", result.height);
        printf("体重: %.1f kg\n", result.weight);
    }

    return 0;
}

// 学生IDを検索する関数
Student find_student_by_id(const Student *students, int size, int id)
{
    for (int i = 0; i < size; i++) {
        if (students[i].id == id) {
            return students[i];  // 一致する学生を返す
        }
    }
    // 見つからなかった場合、無効な Student を返す
    Student not_found = {-1, "", 0.0, 0.0};

    return not_found;
}
