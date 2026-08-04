#include <stdbool.h>
#include <stdio.h>
#include <string.h>

struct tasks {
  char name[30];
  char description[100];
};

int main() {
  char priority[100];
  int option;
  char line[256];

  struct tasks t;

  FILE *file;
  file = fopen("task.txt", "a");

  if (file == NULL) {
    printf("Error appending file");
    return 1;
  }

  printf("-- All tasks -- \n");
  printf("1 - Create new task \n");
  printf("2 - View all tasks \n");

  scanf(" %d", &option);

  int c;
  while ((c = getchar()) != '\n' && c != EOF) {
  }

  if (option == 1) {
    printf("-- New task -- \n");
    printf("Task Name : \n");
    fgets(t.name, sizeof(t.name), stdin);

    printf("Task Description:  \n");
    fgets(t.description, sizeof(t.description), stdin);

    printf("Task Priority:  \n");
    printf("1 - Urgent / 2 - Medium / 3 - Not Important \n");
    fgets(priority, sizeof(priority), stdin);

    fprintf(file, "Name: %s\n Description: %s\n Priority: %s\n", t.name,
            t.description, priority);
    fclose(file);
  }

  if (option == 2) {
    FILE *f;
    f = fopen("task.txt", "r");

    if (f == NULL) {
      printf("Error: Could Not Open File");
    };

    while (fgets(line, sizeof(line), f) != NULL) {
      printf("%s", line);
    }
  }
  return 0;
}
