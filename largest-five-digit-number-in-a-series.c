int largest_five_digits(const char *digits) {
  int cur = 0;
  int max = 0;
  int i = 0;
  while (digits[i] != '\0') {
    if (i >= 5) {
      cur -= (digits[i-5] - '0') * 10000;
    }
    cur *= 10;
    cur += digits[i] - '0';
    if (cur > max) {
      max = cur;
    }
    i++;
  }
  return max;
}
