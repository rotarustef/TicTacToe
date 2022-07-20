#include "../include/color.h"

void printc(const char *str, char *color){

    if(color == "BLACK"){
        color = ANSI_COLOR_BLACK;
    } else if(color == "RED"){
        color = ANSI_COLOR_RED;
    } else if(color == "GREEN"){
        color = ANSI_COLOR_GREEN;
    } else if(color == "YELLOW"){
        color = ANSI_COLOR_YELLOW;
    } else if(color == "BLUE"){
        color = ANSI_COLOR_BLUE;
    } else if(color == "MAGENTA"){
        color = ANSI_COLOR_MAGENTA;
    } else if(color == "CYAN"){
        color = ANSI_COLOR_CYAN;
    } else if(color == "WHITE"){
        color = ANSI_COLOR_WHITE;
    } else if(color == "BR_BLACK"){
        color = ANSI_COLOR_BR_BLACK;
    } else if(color == "BR_RED"){
        color = ANSI_COLOR_BR_RED;
    } else if(color == "BR_GREEN"){
        color = ANSI_COLOR_BR_GREEN;
    } else if(color == "BR_YELLOW"){
        color = ANSI_COLOR_BR_YELLOW;
    } else if(color == "BR_BLUE"){
        color = ANSI_COLOR_BR_BLUE;
    } else if(color == "BR_MAGENTA"){
        color = ANSI_COLOR_BR_MAGENTA;
    } else if(color == "BR_CYAN"){
        color = ANSI_COLOR_BR_CYAN;
    } else if(color == "BR_WHITE"){
        color = ANSI_COLOR_BR_WHITE;
    } else {
        color = ANSI_COLOR_WHITE;
    }

    char *result = malloc(strlen(color) + strlen(str) + strlen(ANSI_COLOR_RESET) + 1); // +1 for the null-terminator
    // in real code you would check for errors in malloc here
    strcpy(result, color);
    strcat(result, str);
    strcat(result, ANSI_COLOR_RESET);
    printf("%s",result);
    free(result);
}