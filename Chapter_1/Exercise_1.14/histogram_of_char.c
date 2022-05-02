#include <stdio.h>

int main() {
    int current = 0;
    int char_frequency[26];

    for (int i = 0; i < 26; i++) {
        char_frequency[i] = 0;
    }

    printf("Please enter the chars you want to see a histogram: \n");
    while ((current = getchar()) != EOF) {
        if (current > 'a' && current < 'z') {
            char_frequency[current - 'a']++;
        } else if (current > 'A' && current < 'Z') {
            char_frequency[current - 'A']++;
        }
    }

    // print vertical histogram
    printf("\nHere is the vertical histogram: \n");
    // calculate the height of the histogram
    int most_frequent = 0;
    for (int i = 0; i < 26; i++) {
        if (char_frequency[i] > most_frequent) {
            most_frequent = char_frequency[i];
        }
    }

    // print histogram
    for (int y = most_frequent; y > 0; y--) {
        for (int x = 0; x < 26; x++) {
            if (char_frequency[x] >= y) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // x axis
    for (int i = 0; i < 26; i++) {
        printf("%c", 'a' + i);
    }
    printf("\n");
    return 0;
}