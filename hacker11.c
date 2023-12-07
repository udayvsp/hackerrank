#include <stdio.h>

int main() {
    int n;

    // Input the value of n
    scanf("%d", &n);

    // Calculate the size of the pattern
    int size = 2 * n - 1;

    // Iterate to print the pattern
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Determine the value to be printed based on the distance from the center
            int distance = i < j ? i : j;
            distance = distance < size - i ? distance : size - i - 1;
            distance = distance < size - j - 1 ? distance : size - j - 1;

            int value = n - distance;

            // Print the value
            printf("%d ", value);
        }
        printf("\n");
    }

    return 0;
}
