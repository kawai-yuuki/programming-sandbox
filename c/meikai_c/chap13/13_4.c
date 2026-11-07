#include <stdio.h>
#include <string.h>

typedef struct {
  char name[100];
  double height;
  double weight;
} Person;

int main(void) {
  FILE* fp;

  if ((fp = fopen("hw_output.txt", "w")) == NULL) {
    printf("ファイルを開けません。\n");
  } else {
    Person person;

    while (1) {
      printf("名前:");
      scanf("%s", person.name);

      if (strcmp(person.name, "end") == 0) {
        break;
      }

      printf("身長:");
      scanf("%lf", &person.height);
      printf("体重:");
      scanf("%lf", &person.weight);

      fprintf(fp, "%-10s %5.1lf %5.1lf\n", person.name, person.height,
              person.weight);
    }
    fclose(fp);
    printf("終了しました。\n   ");
  }

  return 0;
}