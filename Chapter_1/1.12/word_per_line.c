#include <stdio.h>

#define IN 1
#define OUT 2

int main() {
    int current = 0;
    int state = OUT;

    printf("Please enter the chars you want to see a word per line: \n");
    while ((current = getchar()) != EOF) {
        if (current == '-') {
            continue;
        }
        if (current == ' ' || current == '\n' || current == '\t' ||
            current == ',' || current == '.' || current == ':' ||
            current == '!' || current == '?' || current == ';') {
            if (state == IN) {
                printf("\n");
            }
            state = OUT;
        } else if (state == OUT) {
            state = IN;
        }

        if (state == IN) {
            printf("%c", current);
        }
    }
    return 0;
}