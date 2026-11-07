#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

// グローバル変数
int queue[MAX_SIZE];  // キュー本体（サイズ MAX_SIZE の配列）
int head = 0;         // キューの先頭インデックス
int tail = 0;         // キューの末尾インデックス
int count = 0;        // キュー内の要素数

// 関数プロトタイプ宣言
void enqueue(int x);
int dequeue(void);
int is_empty(void);
int is_full(void);
void print_queue(void);

int main(void)
{
    print_queue();
    printf("キューに%dを追加します。\n", 1); enqueue(1);
    printf("キューに%dを追加します。\n", 2); enqueue(2);
    printf("キューに%dを追加します。\n", 3); enqueue(3);
    printf("キューに%dを追加します。\n", 4); enqueue(4);
    printf("キューに%dを追加します。\n", 5); enqueue(5);
    printf("キューに%dを追加します。\n", 6); enqueue(6);
    print_queue();
    printf("キューから値を取り出します：%d\n", dequeue());
    printf("キューから値を取り出します：%d\n", dequeue());
    print_queue();
    printf("キューに%dを追加します。\n", 11); enqueue(11);
    printf("キューに%dを追加します。\n", 12); enqueue(12);
    print_queue();
    printf("キューから値を取り出します：%d\n", dequeue());
    printf("キューから値を取り出します：%d\n", dequeue());
    printf("キューから値を取り出します：%d\n", dequeue());
    printf("キューから値を取り出します：%d\n", dequeue());
    printf("キューから値を取り出します：%d\n", dequeue());
    printf("キューから値を取り出します：%d\n", dequeue());

    return 0;
}

// 要素をキューに追加する
void enqueue(int x)
{
    if (is_full()) {
        printf("キューが満杯です。要素を追加できません。\n");
    }
    else {
        queue[tail] = x;
        tail = (tail + 1) % MAX_SIZE; // 循環させる
        count++;
    }
}

// 要素をキューから取り出す
int dequeue(void)
{
    if (is_empty()) {
        printf("キューが空です。要素を取り出せません。\n");
        return -1;
    }
    else {
        int ret = queue[head];
        head = (head + 1) % MAX_SIZE; // 循環させる
        count--;
        return ret;
    }
}

// キューが空かどうか判定
int is_empty(void)
{
    if (count == 0)
        return 1;   // 空
    else
        return 0;   // 空でない
}

// キューが満杯かどうか判定
int is_full(void)
{
    if (count == MAX_SIZE)
        return 1;   // 満杯
    else
        return 0;   // 満杯でない
}

// キューの状態を表示
void print_queue(void)
{
    printf("キューの状態：要素数 = %d head = %d tail = %d ", count, head, tail);

    if (!is_empty()) {
        printf("要素 = ");
        // head から count 個分を順に表示
        for (int i = 0; i < count; i++) {
            int index = (head + i) % MAX_SIZE;
            printf("%d ", queue[index]);
        }
    }
    printf("\n");
}
