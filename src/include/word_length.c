#include <ctype.h>
#include <stdio.h>
#include <stdint.h>

void temp(void) {
  (void) printf("%s] %s) %d- Hello, Header!\n", __FILE__, __func__, __LINE__);
  return;
}

int lengthOfLastWord(char* s) {
  int word_length = 0;
  bool is_space = true;
  char *count_s = s;

  while('\0' != *count_s) {
    if(' ' == *count_s) {
      is_space = true;
    }
    if(isprint(*count_s) && (' ' != *count_s) && is_space) {
      word_length = 0;
      is_space = false;
    }
    if(isprint(*count_s) && (' ' != *count_s) && !is_space) {
      word_length++;
      is_space = false;
    }
    count_s++;
  }

  return word_length;
}
