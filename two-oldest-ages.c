#include <stdlib.h>

//result is an output buffer which has to be filled with the solution
void two_oldest_ages(size_t n, const int ages[n], int result[2]) {
  size_t i;
  memset(result, 0, 2 * sizeof(int));
  for (i = 0; i < n; i++) {
    if (ages[i] >= result[1]) {
      result[0] = result[1];
      result[1] = ages[i];
    } else if (ages[i] > result[0]) {
      result[0] = ages[i];
    }
  }
}
