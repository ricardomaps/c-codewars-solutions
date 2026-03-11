double arithmetic(double a, double b, const char* operator) {
  switch (*operator) {
    case 'a': return a + b;
    case 's': return a - b;
    case 'm': return a * b;
    case 'd': return a / b;
  }
}
