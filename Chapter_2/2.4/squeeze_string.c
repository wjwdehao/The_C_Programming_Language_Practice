#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief remove any character that exists in match string from source string
 * 
 * @return int 
 */
int main () {
    char source[] = "hello, world!";
    char match[] = "test!";
    char* output = malloc(sizeof(strlen(source)) + 1);
    printf("Source: %s. Match: %s\n", source, match);
    int filtered_index = 0;
    bool matched = false;
    for (int source_index = 0; source[source_index] != '\0'; source_index++) {
        for (int match_index = 0; match[match_index] != '\0'; match_index++) {
            if (source[source_index] == match[match_index]) {
                matched = true;
                break;
            }
        }
        if (!matched) {
            output[filtered_index] = source[source_index];
            filtered_index++;
        }
        matched = false;
    }

    output[filtered_index] = '\0';
    printf("The result: %s\n", output);

    return 0;
}