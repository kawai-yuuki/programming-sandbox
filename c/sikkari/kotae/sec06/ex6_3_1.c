// 複合代入演算子を使用したプログラム
#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5;
    n1 = n2 = n3 = n4 = n5 = 10;

    n1 += 5;
    n2 -= 3;
    n3 *= 2;
    n4 /= 4;
    n5 %= 3;

    printf("n1:%d\n", n1);
    printf("n2:%d\n", n2);
    printf("n3:%d\n", n3);
    printf("n4:%d\n", n4);
    printf("n5:%d\n", n5);
    
    return 0;
}
