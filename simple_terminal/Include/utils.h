#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_CMD_SZ 5
#define MAX_NAME_SZ 256 /* Maximum name size + 1. */
#define CLEAR_LINE_AND_RETURN "\33[2K\r"
#ifdef PICO_DEFAULT_LED_PIN
#define LED_PIN PICO_DEFAULT_LED_PIN
#else
#define LED_PIN 25
#endif

void clear_line(void);
int equal_str(char str1[], char str2[]);