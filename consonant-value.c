int solve(const char *str_in) {
  int max = 0, cur = 0;
  for (; *str_in != '\0'; str_in++) {
    if (*str_in == 'a' || *str_in == 'e' || *str_in == 'i' || *str_in == 'o' || *str_in == 'u') {
      cur = 0;
      continue;
    }
    cur += *str_in - 96;
    if (cur > max)
      max = cur;
  }
  return max;
}
