#include <stdio.h>

int main() {
    int n; // Number of boxes
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int length, width, height;
        scanf("%d %d %d", &length, &width, &height);

        // Check if the height of the box is less than the tunnel's height
        if (height < 41) {
            // Calculate the volume of the box and print it
            int volume = length * width * height;
            printf("%d\n", volume);
        }
    }

    return 0;
}
