#include <stdio.h>

int main() {
    // Print "Hello, World!" on a single line
    printf("Hello, World!\n");

    // Read the input string
    char inputString[1000];
    fgets(inputString, sizeof(inputString), stdin);

    // Print the input string on the next line
    printf("%s", inputString);

    return 0;
}
