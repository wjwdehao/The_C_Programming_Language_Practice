#include <stdio.h>

#define IN 1
#define OUT 2

int main() {
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    printf("Please enter the chars you want to count: \n");
    while ((c = getchar()) != EOF) {
        nc++;
        if (c == '\n') {
            nl++;
        }

        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            nw++;
        }
    }

    printf("\nSummary of counts. Lines: %d. Word: %d. Chars: %d", nl, nw, nc);
    return 0;
}