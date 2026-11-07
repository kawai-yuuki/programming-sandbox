#include <stdio.h>
// □　■
int main(void)
{
    int array1[8][8] = {
        0, 1, 1, 1, 1, 1, 1, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 1, 1, 1, 1, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0
    }; 
    int array2[8][8];
    int i, j;
    int mode;

    printf("元の配列の表示\n");
    for (i= 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if (array1[i][j] == 1) {
                printf("■ ");
            } else {
                printf("□ ");
            }
        }
        printf("\n");
    }

    printf("1: 右へ90度回転\n");
    printf("2: 左へ90度回転\n");
    printf("3: 上下反転\n");
    printf("4: 左右反転\n");
    printf("回転モードを指定してください> ");
    scanf("%d", &mode);

    printf("結果の配列の表示\n");

    switch (mode)
    {
    case 1 :
        for (i= 0; i < 8; i++) {
            for (j = 0; j < 8; j++) {
                array2[i][j] = array1[7 - j][i];

                if (array2[i][j] == 1) {
                    printf("■ ");
                } else {
                    printf("□ ");
                }
            }
            printf("\n");
        }
        break;
    
    case 2 :
        for (i= 0; i < 8; i++) {
            for (j = 0; j < 8; j++) {
                array2[i][j] = array1[j][7 - i];

                if (array2[i][j] == 1) {
                    printf("■ ");
                } else {
                    printf("□ ");
                }
            }
            printf("\n");
        }
        break;

    case 3 :
        for (i= 0; i < 8; i++) {
            for (j = 0; j < 8; j++) {
                array2[i][j] = array1[7 - i][j];
            
                if (array2[i][j] == 1) {
                    printf("■ ");
                } else {
                    printf("□ ");
                }
            }
            printf("\n");
        }
        break;
    
    case 4 :
        for (i= 0; i < 8; i++) {
            for (j = 0; j < 8; j++) {
                array2[i][j] = array1[i][7 - j];

                if (array2[i][j] == 1) {
                    printf("■ ");
                } else {
                    printf("□ ");
                }
            }
            printf("\n");
        }
        break;

    
    default:
        break;
    }

    return 0;
}
