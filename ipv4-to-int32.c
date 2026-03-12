#include <stdint.h>
#include <stdio.h>

uint32_t ip_to_uint32(const char *ip) {
  union {
    struct { uint8_t octet1, octet2, octet3, octet4; };
    uint32_t int_repr;
  } res;
  sscanf(ip, "%hhu.%hhu.%hhu.%hhu", &res.octet4, &res.octet3, &res.octet2, &res.octet1);
  return res.int_repr;
}
