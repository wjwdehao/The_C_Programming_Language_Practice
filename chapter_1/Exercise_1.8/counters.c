#include <stdio.h>



int main() {
    int space_counter = 0;
    int tab_counter = 0;
    int newline_counter = 0;
    char current;
    printf("Please enter the chars you want to count: \n");
    while ((current = getchar()) != EOF) {
        if (current == ' ') {
            space_counter++;
        } else if (current == '\t') {
            tab_counter++;
        } else if (current == '\n') {
            newline_counter++;
        }
    }

    printf("The result: spaces: %d. tabs: %d. newlines: %d\n", space_counter, tab_counter, newline_counter);
    return 0;
}