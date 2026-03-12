#include <stddef.h>

/* Note:
    * return a freeable pointer
    * save the length of the parts_sums in <len>
*/

unsigned long long *parts_sums(size_t *len, const unsigned long long ls[/* n */], size_t n) {
  *len = n + 1;
  unsigned long long *res = malloc(sizeof(unsigned long long) * (n + 1));
  unsigned long long sum = 0;
  for(size_t i = 0; i < n; i++) {
    sum += ls[i];
  }
  for(size_t i = 0; i < n; i++) {
    res[i] = sum;
    sum -= ls[i];
  }
  res[n] = 0;
  return res;
}
