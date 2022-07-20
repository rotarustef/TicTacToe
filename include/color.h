
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef _WIN32
#include <Windows.h>
#include <conio.h>
#else
#include <unistd.h>
#endif


#define ANSI_COLOR_BLACK   "\x1b[30m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_WHITE   "\x1b[37m"

#define ANSI_COLOR_BR_BLACK   "\x1b[90m"
#define ANSI_COLOR_BR_RED     "\x1b[91m"
#define ANSI_COLOR_BR_GREEN   "\x1b[92m"
#define ANSI_COLOR_BR_YELLOW  "\x1b[93m"
#define ANSI_COLOR_BR_BLUE    "\x1b[94m"
#define ANSI_COLOR_BR_MAGENTA "\x1b[95m"
#define ANSI_COLOR_BR_CYAN    "\x1b[96m"
#define ANSI_COLOR_BR_WHITE   "\x1b[97m"

#define ANSI_COLOR_RESET      "\x1b[0m"

void printc(const char *str, char *color);

