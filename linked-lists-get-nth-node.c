#include <stddef.h>

struct List {
  struct List *next;
  int data;
};

struct List *get_nth_node(const struct List *list, size_t n) {
  for (; n > 0 && list != NULL; list = list->next, n--);
  return list;
}
