#include <stdio.h>

int main() {
    int start, end;

    // Input the range
    scanf("%d", &start);
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        if (i >= 1 && i <= 9) {
            // Print the English representation for numbers 1 to 9
            switch (i) {
                case 1:
                    printf("one\n");
                    break;
                case 2:
                    printf("two\n");
                    break;
                case 3:
                    printf("three\n");
                    break;
                case 4:
                    printf("four\n");
                    break;
                case 5:
                    printf("five\n");
                    break;
                case 6:
                    printf("six\n");
                    break;
                case 7:
                    printf("seven\n");
                    break;
                case 8:
                    printf("eight\n");
                    break;
                case 9:
                    printf("nine\n");
                    break;
            }
        } else if (i % 2 == 0) {
            // If even, print "even"
            printf("even\n");
        } else {
            // If odd, print "odd"
            printf("odd\n");
        }
    }

    return 0;
}
