#include <stdio.h>

void update(int *a, int *b) {
    // Update the value of 'a' to their sum
    *a = *a + *b;

    // Update the value of 'b' to their absolute difference
    *b = (*a - 2 * (*b) > 0) ? (*a - 2 * (*b)) : (2 * (*b) - *a);
}

int main() {
    int a, b;
    // Input two integers
    scanf("%d %d", &a, &b);

    // Call the update function
    update(&a, &b);

    // Print the modified values
    printf("%d\n%d", a, b);

    return 0;
}
