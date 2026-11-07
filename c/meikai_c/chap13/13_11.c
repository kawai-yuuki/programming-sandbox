#include <stdio.h>

int main(void)
{
    FILE *fp;
    double array[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};

    if ((fp = fopen("binary_data", "wb")) == NULL) {
        printf("ファイルをひらけません。\n");
    }
    else {
        fwrite(array, sizeof(double), 10, fp);
        fclose(fp);
    }

    if ((fp = fopen("binary_data", "rb")) == NULL) {
        printf("ファイルをひらけません。\n");
    }
    else {
        fread(array, sizeof(double), 10, fp);
        for (int i = 0; i < 10; i++) {
            printf("%f\n", array[i]);
        }
        fclose(fp);
    }

    return 0;
}