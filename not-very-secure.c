#include <stddef.h>
#include <stdbool.h>

bool alphanumeric(const char *str_in) {
  if(*str_in == NULL) return false;
  for(; *str_in != NULL; str_in++) {
    if(*str_in >= '0' && *str_in <= '9' ||
       *str_in >= 'A' && *str_in <= 'Z' ||
       *str_in >= 'a' && *str_in <= 'z') 
      continue;
    return false;
  }
  return true;
}
