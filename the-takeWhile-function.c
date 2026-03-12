#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>

typedef bool (*Predicate) (int);

int *take_while (size_t len_in, const int array[len_in], Predicate p, size_t *len_out) {
  size_t len = 0;
  for(; len < len_in && p(array[len]); len++);
  *len_out = len;
  int *res = calloc(len, sizeof(int));
  memcpy(res, array, len * sizeof(int));
  return res;
}
