// グローバル変数のアドレスを返す関数
#include <stdio.h>

int *ret_global_area(int no);

int global_config1 = 1;
int global_config2 = 2;
int global_config3 = 3;

int main(void)
{
    int *ptr = ret_global_area(2);
    printf("返却値：%d\n", *ptr);
    return 0;
}

int *ret_global_area(int no)
{
    // noに応じてグローバル変数のアドレスを返す
    switch(no){
        case 1:
            return &global_config1;
        case 2:
            return &global_config2;
        default:
            return &global_config3;
    }
}



