typedef struct {
    int r, g, b;
} rgb;

rgb hex_str_to_rgb(const char *hex_str) {
  rgb color;
  sscanf(hex_str, "#%2x%2x%2x", &color.r, &color.g, &color.b);
  return color;
}
