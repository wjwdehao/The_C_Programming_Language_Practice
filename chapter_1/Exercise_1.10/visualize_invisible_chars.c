#include <stdio.h>



int main() {
    char current;
    printf("Please enter the chars you want to uncover: \n");
    while ((current = getchar()) != EOF) {
        if (current == '\t') {
            printf("\\t");
        } else if (current == '\\') {
            printf("\\\\");
        } else if (current == '\b') {
            // I couldn't test this case since I don't know how to type backspace in a modern computer. 
            // fn + delete on Mac doesn't work. 
            printf("\\b");
        } else {
            printf("%c", current);
        }
    }
    return 0;
}