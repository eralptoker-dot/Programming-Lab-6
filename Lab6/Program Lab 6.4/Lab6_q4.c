
#include <stdio.h>

int main() {
    int arr[8];
    int temp;
    int *start, *end;

    printf("Enter 8 integers:\n");

    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }

    start = arr;
    end = arr + 7;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed array: ");

    for (int i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
