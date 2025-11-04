#include <stdio.h>
int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;
    int increase;
    for (i = 0; i < n - 1; i++) {
        increase = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                increase++;
            }
        }
        if (increase == 0) {
            break;
        }
    }
    printf("Mang sau khi sap xep tang dan: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

