#include <stdio.h>

// Function to find the maximum of four integers
int max_of_four(int a, int b, int c, int d) {
    int max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    if (d > max) {
        max = d;
    }

    return max;
}

int main() {
    // Input four integers
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Call the function and print the result
    printf("%d\n", max_of_four(a, b, c, d));

    return 0;
}
