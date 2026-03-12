#include <stdbool.h>
#include <stddef.h>

struct Node {
    struct Node *next;
    char data;
};

size_t list_length(const struct Node *list) {
  size_t length = 0;
  for(; list != NULL; length++, list = list->next);
  return length;
}

bool get_kth_from_last(const struct Node *list, size_t k, char *data) {
  size_t length = list_length(list);
  if(k > length) return false;
  for(size_t pos = length - k; pos > 0; pos--, list = list->next);
  *data = list->data;
  return true;
}
