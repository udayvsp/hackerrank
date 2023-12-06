#include <stdio.h>

int main() {
    char ch;
    char str[100];
    char sentence[100];

    // Input a character
    scanf("%c", &ch);
    // Discard the newline character after the first input
    scanf("%*c");

    // Input a string
    scanf("%[^\n]%*c", str);

    // Input a sentence
    scanf("%[^\n]%*c", sentence);

    // Print the character, string, and sentence
    printf("%c\n%s\n%s\n", ch, str, sentence);

    return 0;
}
