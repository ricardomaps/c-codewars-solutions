int word_score (const char *word) {
  int res = 0;
  for (int i = 0; word[i] != '\0'; i++) {
    res += word[i] - 'a' + 1;
  }
  return res;
}
