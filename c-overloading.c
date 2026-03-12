#include <string.h>
#include <stdio.h>

#define add(a, b) _Generic ((a), \
  int: _Generic ((b), \
    int: add_int_int, \
    char*: add_int_chars \
  ), \
  char*: _Generic ((b), \
    int: add_chars_int,\
    char*: add_chars_chars \
  ) \
)(a, b)

static int add_int_int(int a, int b) {
  return a + b;
}

static char *add_int_chars(int a, char *b) {
  char buf[20];
  int len = snprintf(buf, sizeof(buf), "%d", a);
  memmove(b + len, b, strlen(b) + 1);
  memcpy(b, buf, len);
  return b;
}

static char *add_chars_int(char *a, int b) {
  char buf[20];
  snprintf(buf, sizeof(buf), "%d", b);
  strcat(a, buf);
  return a;
}

static char *add_chars_chars(char *a, char *b) {
  strcat(a, b);
  return a;
}
