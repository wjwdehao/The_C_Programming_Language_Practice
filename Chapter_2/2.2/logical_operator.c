#include <stdio.h>

int main () {

    int i = 0;
    int lim = 2;
    char c = '\0';

    int original_expression = i < lim-1 && c != '\n' && c != EOF;

    printf("What is the result of the original expression: %d\n", original_expression);
    return 0;
}