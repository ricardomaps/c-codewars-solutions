#include <stddef.h>

struct Node {
    struct Node *next;
    int value;
};

size_t list_length(const struct Node *list) {
  for (size_t length = 0; list != NULL; length++, list = list->next) {}
  return length;
}

size_t list_count(const struct Node *list, int search_val) {
  for (size_t count = 0; list != NULL; list->value == search_val && count++, list = list->next) {}
  return count;
}
