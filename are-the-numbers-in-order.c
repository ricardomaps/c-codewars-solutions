#include <stddef.h>
#include <stdbool.h>

bool in_asc_order(const int *arr, size_t arr_size) {
  for (size_t i = 1; i < arr_size; i++) {
    if (arr[i-1] > arr[i]) {
      return false;
    }
  }
  return true;
}
