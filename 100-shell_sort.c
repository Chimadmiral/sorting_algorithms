#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void shell_sort(int *array, size_t size) {
  int interval, i, j, temp;
  for (interval = 1; interval <= size / 3; interval = interval * 3 + 1) {
    // do nothing
  }
  for (; interval > 0; interval /= 3) {
    for (i = interval; i < size; i++) {
      temp = array[i];
      for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
        array[j] = array[j - interval];
      }
      array[j] = temp;
    }
    printf("Interval = %d: ", interval);
    for (i = 0; i < size; i++) {
      printf("%d ", array[i]);
    }
    printf("\n");
  }
}
