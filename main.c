#include <stdbool.h>
#include <stdio.h>
#include <string.h>

struct tasks {
  char name[30];
  char description[100];
};

int main() {
  char priority[100];
  char option;

  struct tasks t;

  FILE *file;
  file = fopen("task.txt", "a");

  if (file == NULL) {
    printf("Error appending file");
    return 1;
  }

  printf("-- All tasks -- \n");
  printf("1 - Create new task \n");

  while (1) {
    scanf(" %c", &option);

    if (option == '1') {
      printf("-- New task -- \n");
      printf("Task Name : \n");
      fgets(t.name, sizeof(t.name), stdin);
      getchar();

      printf("Task Description:  \n");
      fgets(t.description, sizeof(t.description), stdin);
      getchar();

      printf("Task Priority:  \n");
      printf("1 - Urgent / 2 - Medium / 3 - Not Important \n");
      fgets(priority, sizeof(priority), stdin);

      getchar();

      fprintf(file, "Name: %sDescription: %sPriority: %s\n\n", t.name,
              t.description, priority);

      break;
    }
  }

  return 0;
}

// i need to find a way to store the tasks in the cli
