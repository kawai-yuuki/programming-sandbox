#include <stdio.h>

int main(void)
{
    double monthly_precipitation[12] = 
    {43.8, 49.8, 76.9, 79.5, 87.5, 118.1, 144.8, 144.3, 169.2, 95.3, 63.4, 32.5};
    int counter = 0;

    int i;

    for (i = 0; i < 12; i++) {
        printf("%2d月(%5.1lfmm): ", i + 1, monthly_precipitation[i]);
        while ((int)monthly_precipitation[i] / 5 > counter){
            printf("*");
            counter++;
        }
        counter = 0;
        // printf("%d", (int)monthly_precipitation[i] / 5);
        printf("\n");
    }
}