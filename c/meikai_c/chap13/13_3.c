#include <stdio.h>

typedef struct {
  char name[100];
  double height;
  double weight;
} Person;

int main(void) {
  FILE* fp;

  if ((fp = fopen("hw.txt", "r")) == NULL) {
    printf("ファイルを開けません。\n");
  } else {
    Person person[100];
    int ninzu = 0;
    double hsum = 0.0;
    double wsum = 0.0;
    int i, j;

    while (fscanf(fp, "%s%lf%lf", person[ninzu].name, &person[ninzu].height,
                  &person[ninzu].weight) == 3) {
      // printf("%-10s %5.1lf %5.1lf\n", name, height, weight);
      hsum += person[ninzu].height;
      wsum += person[ninzu].weight;
      ninzu++;
    }

    for (i = 0; i < ninzu; i++) {
      for (j = i + 1; j < ninzu; j++) {
        if (person[i].height > person[j].height) {
          Person tmp = person[i];
          person[i] = person[j];
          person[j] = tmp;
        }
      }
    }

    for (i = 0; i < ninzu; i++) {
      printf("%-10s %5.1lf %5.1lf\n", person[i].name, person[i].height,
             person[i].weight);
    }
    printf("----------------------\n");
    printf("平均       %5.1lf %5.1lf\n", hsum / ninzu, wsum / ninzu);
    fclose(fp);
  }
  return 0;
}