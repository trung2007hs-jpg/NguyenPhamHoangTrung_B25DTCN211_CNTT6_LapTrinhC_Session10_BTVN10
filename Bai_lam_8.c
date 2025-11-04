#include <stdio.h>
int main() {
    int arr[6] = {5, 1, 8, 3, 2, 7};
    int n = 6;
    int x = 5; 
    int i, j, temp;
    int left, right, mid;
    int found = -1;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    left = 0;
    right = n - 1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == x) {
            found = mid;
            break;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (found != -1)
        printf("Chi so cua phan tu can tim: %d\n", found);
    else
        printf("Khong tim thay phan tu trong mang.\n");
    return 0;
}


