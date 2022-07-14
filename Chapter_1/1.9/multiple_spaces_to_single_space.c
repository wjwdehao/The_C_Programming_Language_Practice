#include <stdio.h>



int main() {
    int space_counter = 0;
    char current;
    printf("Please enter the chars you want to replace multiple spaces with single space: \n");
    while ((current = getchar()) != EOF) {

        if (current == ' ') {
            if (space_counter >= 1) {
                continue;
            } else {
                space_counter++;
            }
        } else {
            space_counter = 0;
        }
        printf("%c", current);
    }
    return 0;
}