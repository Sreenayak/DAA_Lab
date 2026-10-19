#include <stdio.h>

int main() {
    int n, i, count = 0;
    int buildings[8];

    printf("Enter number of buildings (max 8): ");
    scanf("%d", &n);

    printf("Enter heights of %d buildings:\n", n);
    for (i = 0; i < n; i++) {
        printf("Height of building %d:", i + 1);
        scanf("%d", &buildings[i]);
    }

    int maxHeight = 0;
    for (i = 0; i < n; i++) {
        if (buildings[i] > maxHeight) {
            count++;
            maxHeight = buildings[i];
        }
    }

    printf("Number of buildings receiving sunlight: %d\n", count);
    printf("Height of the tallest building receiving sunlight: %d\n", maxHeight);

    return 0;
}
