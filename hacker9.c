#include <stdio.h>

int main() {
    int number;

    // Input the five-digit number
    scanf("%d", &number);

    // Extracting individual digits and calculating the sum
    int sum = 0;
    while (number > 0) {
        sum += number % 10;  // Extract the last digit and add to sum
        number /= 10;        // Remove the last digit
    }

    // Print the sum of the digits
    printf("%d\n", sum);

    return 0;
}
