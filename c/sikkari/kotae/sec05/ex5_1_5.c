// 浮動小数点値を出力するプログラム
#include <stdio.h>

int main(void) 
{
    printf("[-]ddd.ddd形式 : %f\n", 123.456);
    printf("[-]d.ddde±dd形式  : %e\n", 123.456);

    printf("精度2を指定 : %.2f\n", 123.456);
    printf("精度2を指定 : %.2e\n", 123.456);

    return 0;
}
