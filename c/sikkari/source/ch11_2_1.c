#include <stdio.h>

int main(void) 
{
    int i, j, k, l;
    double distance[9] = {2.3, 3.5, 3.5, 2.1, 3.7, 2.2, 1.8, 3.2, 2.3};
    double *p = distance;

    printf("     駅1    駅2    駅3    駅4    駅5    駅6    駅7    駅8    駅9    駅10\n");
    for (i = 0; i < 10; i++) {
        printf("駅%2d  ",i + 1);
        for (j = 0; j < i; j++) {
            printf("       ");
        }
        printf("---");

        double sum = 0;
        p = distance + i;
        for (k = 0; k < 10 - i - 1; k++) {
            sum += *p;
            p++;
            printf("   %4.1lf", sum);
        }
        sum = 0;
        printf("\n");
    }
    return 0;
}