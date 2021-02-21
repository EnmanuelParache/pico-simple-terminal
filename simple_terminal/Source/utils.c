
#include "utils.h"

/**
 * Clears current line in terminal and return cursor
 **/
void clear_line(void) {
    printf(CLEAR_LINE_AND_RETURN);
    return;
}

/**
 * @param str1 String input one
 * @param str2 String input two
 * @return 1 if str1 and str2 are equal otherwiser return 0
 **/
int equal_str(char str1[], char str2[]) {
  return strcmp(str1, str2) == 0;
}