#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];

    // Input the sentence
    fgets(sentence, sizeof(sentence), stdin);

    // Tokenize the sentence and print each word in a new line
    char *token = strtok(sentence, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
