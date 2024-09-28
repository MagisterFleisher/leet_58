#include <stdio.h>
#include "include/word_length.h"

int main(int argument_count, char** argument_vector) {
  int error = 0;
  (void) printf("%s] %s) %d- argument_count: %d\n", __FILE__, __FUNCTION__, __LINE__, argument_count);
  (void) temp();

  char *search_string = "  Hello World   ";

  (void) printf("String: %s\nLength of last word: %d", search_string, lengthOfLastWord(search_string));
  return error;
}
