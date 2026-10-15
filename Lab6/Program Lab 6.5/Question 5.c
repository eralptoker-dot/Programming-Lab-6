
#include <stdio.h>

void split_array(int *source, int size, int *positive, int *positive_count, int *negative, int *negative_count) {

    *positive_count = 0;
    *negative_count = 0;

    for (int i = 0; i < size; i++) {

        if (*(source + i) > 0) {
            *(positive + *positive_count) = *(source + i);
            (*positive_count)++;
        }
        else if (*(source + i) < 0) {
            *(negative + *negative_count) = *(source + i);
            (*negative_count)++;
        }
    }
}

int main() {
    int arr[100], positive[100], negative[100];
    int size;
    int positive_count, negative_count;

    printf("How many numbers? ");
    scanf("%d", &size);

    if (size < 1 || size > 100) {
        printf("Invalid size\n");
        return 1;
    }

    printf("Enter the numbers:\n");

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    split_array(arr, size, positive, &positive_count, negative, &negative_count);

    printf("Positive numbers: ");
    for (int i = 0; i < positive_count; i++) {
        printf("%d ", positive[i]);
    }

    printf("\nNegative numbers: ");
    for (int i = 0; i < negative_count; i++) {
        printf("%d ", negative[i]);
    }

    printf("\nPositive count: %d", positive_count);
    printf("\nNegative count: %d\n", negative_count);

    return 0;
}

