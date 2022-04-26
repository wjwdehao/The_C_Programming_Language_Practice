#include <stdio.h>

// #define IN 1
// #define OUT 2

int main() {
    int current = 0;
    // int state = OUT;
    int word_length = 0;
    int length_count[10];

    for (int i = 0; i < 10; i++) {
        length_count[i] = 0;
    }

    printf("Please enter the chars you want to see a histogram: \n");
    while ((current = getchar()) != EOF) {
        if (current == ' ' || current == '\n' || current == '\t' ||
            current == ',' || current == '.' || current == ':' ||
            current == '!' || current == '?' || current == ';') {
            // state = OUT;
            length_count[word_length-1]++;
            word_length = 0;
        } else {
            word_length++;
        }
    }
    if (word_length > 0) {
        length_count[word_length-1]++;
    }

    // print horizontal histogram
    printf("\n Here is the horizontal histogram: \n");
    for (int i = 0; i < 10; i++) {
        printf("Length of %d:", i+1);
        for (int j = 0; j < length_count[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    // print vertical histogram
    printf("\nHere is the vertical histogram: \n");
    // calculate the height of the histogram
    int most_frequent = 0;
    for (int i = 0; i < 10; i++) {
        if (length_count[i] > most_frequent) {
            most_frequent = length_count[i];
        }
    }

    // print histogram
    for (int y = most_frequent; y > 0; y--) {
        for (int x = 0; x < 10; x++) {
            if (length_count[x] >= y) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // x axis
    for (int i = 0; i < 10; i++) {
        printf("%d", i+1);
    }
    printf("\n");
    return 0;
}