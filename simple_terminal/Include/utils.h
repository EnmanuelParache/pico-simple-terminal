#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_NAME_SZ 256 /* Maximum name size + 1. */
#define CLEAR_LINE_AND_RETURN "\33[2K\r"
#define LED_PIN 25

void clear_line(void);
int equal_str(char str1[], char str2[]);