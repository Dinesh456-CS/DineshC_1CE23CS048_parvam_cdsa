#include <stdio.h>

void modifyString(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    if (length % 2 == 0) {
        str[length - 1] = '1';
    } else {
        str[length - 1] = '0';
    }

    printf("Modified String: %s\n", str);
}

int main() {
    char inputString[] = "HelloWorld";
    modifyString(inputString);
    return 0;
}