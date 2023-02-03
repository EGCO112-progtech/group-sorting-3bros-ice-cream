#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sorting.h"

void argctonum(int new_arr[], char *argv[], int n) {
  int j = 0;
  for (int i = 2; i < n; i++) {
    new_arr[j] = atoi(argv[i]);
    j++;
  }
}

int main(int argc, char *argv[]) {
  int n = argc - 2;
  int *a = (int *)malloc(sizeof(int) * n);

  argctonum(a, argv, argc);

  display(a, n);
  if (strcmp(argv[1], "bubble") == 0) {
    bubbleSort(a, n);
  } else if (strcmp(argv[1], "insertion") == 0) {
    insertion(a, n);
  } else if (strcmp(argv[1], "selection") == 0) {
    selectionSort(a, n);
  }
  display(a, n);
  return 0;
}


