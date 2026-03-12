#include <ctype.h>
#include <stddef.h>
#include <stdbool.h>

bool alphanumeric(const char *str_in) {
  if(*str_in == NULL) return false;
  for(; *str_in != NULL; str_in++) {
    if(isalnum(*str_in)) continue;
    return false;
  }
  return true;
}
