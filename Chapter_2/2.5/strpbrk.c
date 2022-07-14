#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Similar to what strpbrk does: return the first location in the string s1 where any character from the string s2 occurs.
 * 
 * @return int 
 */
int main () {
    char s1[] = "hello, world!";
    char s2[] = "test!";
    printf("Source: %s. Match: %s\n", s1, s2);
    int location = 0;
    bool matched = false;
    for (int s1_index = 0; s1[s1_index] != '\0'; s1_index++) {
        for (int s2_index = 0; s2[s2_index] != '\0'; s2_index++) {
            if (s1[s1_index] == s2[s2_index]) {
                matched = true;
                break;
            }
        }
        if (matched) {
            location = s1_index;
            break;
        }
    }

    printf("The result: %d\n", location);

    return 0;
}