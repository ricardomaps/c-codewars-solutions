#define _GNU_SOURCE
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <errno.h>

bool is_valid_ip(const char *addr) {
  char* end;
  char* start = addr;
  int len;
  int val;
  for(int i = 0; i < 4; i++) {
    if ((end = strchrnul(start, '.')) == NULL && i < 3) 
      return false;
    

    len = end - start;
    if (len > 3 || len < 1) 
      return false;
    
    if (*start == '0' && len > 1) 
      return false;

    val = 0;
    for (char* d = start; d < end; d++) {
      if (*d < '0' || *d > '9') 
        return false;
      
      val *= 10;
      val += *d - '0';
    }

    if (val > 255) 
      return false;
   
    start = end + 1;
  }

  if (*end != '\0') 
    return false;
  
  return true;
}
