// ビット単位の論理演算子を確認するプログラム
#include <stdio.h>
#include <stdint.h>  // uint32_tとUINT32_MAX を使うためにインクルード

int main(void)
{
	uint32_t a, b;

	printf("0 ～ %u の整数を2つ入力してください。\n", UINT32_MAX);
	printf("＞ ");
	scanf("%u", &a);
	printf("＞ ");
	scanf("%u", &b);

	printf("%u(%#x) AND %u(%#x) = %#x\n", a, a, b, b, a & b);
	printf("%u(%#x) OR  %u(%#x) = %#x\n", a, a, b, b, a | b);
	printf("%u(%#x) XOR %u(%#x) = %#x\n", a, a, b, b, a ^ b);
    printf("NOT %u(%#x) = %#x\n", a, a, ~a);

	return 0;
}
