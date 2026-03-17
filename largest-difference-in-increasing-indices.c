#include <stddef.h>

size_t largest_difference(size_t length, const int data[length]) {
  size_t res = 0;
  for (size_t i = 0; i < length; i++) {
    for (size_t j = length-1; j > i; j--) {
      if (data[j] >= data[i] && j - i > res)
        res = j - i;
    }
  }
  return res;
}
