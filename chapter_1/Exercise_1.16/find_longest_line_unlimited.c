#include <stdio.h>
#define MAXLINE 5

int getLineLength(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    int current_len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((current_len = getLineLength(line, MAXLINE)) > 0) {
        if (current_len > max) {
            max = current_len;
            copy(longest, line);
        }
    }

    if (max > 0) {
        printf("The longest line has %d chars and it is: \n%s\n", max, longest);
    }
    return 0;
}


int getLineLength(char s[], int lim) {
    int c, i;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
        if (i < lim - 2) {
            s[i] = c;
        }
    }

    if (c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i = 0;

    while ((to[i] = from [i]) != '\0') {
        i++;
    }
}