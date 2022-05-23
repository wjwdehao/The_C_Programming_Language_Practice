#include <stdio.h>


int htoi(char* hexadecimal);

int main () {

    printf("Hexadecimal 9 is: %d\n", htoi("9"));
    printf("Hexadecimal 0x9 is: %d\n", htoi("0x9"));
    printf("Hexadecimal 0X9 is: %d\n", htoi("0X9"));

    printf("Hexadecimal 1f is: %d\n", htoi("1f"));
    printf("Hexadecimal 0x1f is: %d\n", htoi("0x1f"));
    printf("Hexadecimal 0X1f is: %d\n", htoi("0X1f"));

    printf("Hexadecimal 0x8.5 is: %d\n", htoi("0x8.5"));
    return 0;
}

// The exercise only asks for one function, since the copypasta. 
int htoi(char* hexadecimal) {
    char* stripped_hex;
    if (hexadecimal[0] == '0' && (hexadecimal[1] == 'x' || hexadecimal[1] == 'X')) {
        stripped_hex = &(hexadecimal[2]);
    } else {
        stripped_hex = hexadecimal;
    }
    int result = 0;
    for (int i = 0; (stripped_hex[i] >= '0' && stripped_hex[i] <= '9') ||
                    (stripped_hex[i] >= 'a' && stripped_hex[i] <= 'f') ||
                    (stripped_hex[i] >= 'A' && stripped_hex[i] <= 'F'); i++) {
        if (stripped_hex[i] >= '0' && stripped_hex[i] <= '9') {
            result = 16 * result + stripped_hex[i] - '0';
        } else if (stripped_hex[i] >= 'a' && stripped_hex[i] <= 'f') {
            result = 16 * result + stripped_hex[i] - 'a' + 10;
        } else {
            result = 16 * result + stripped_hex[i] - 'A' + 10;
        }
    }
    return result;
}
