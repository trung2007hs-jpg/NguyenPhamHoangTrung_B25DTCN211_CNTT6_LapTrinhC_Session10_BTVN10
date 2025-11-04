#include <stdio.h>
int main() {
    int arr[6] = {5, 1, 8, 3, 2, 7};
    int n = 6;
    int k = 4;
    int i, j, temp;
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
    if (k >= 1 && k <= n) {
        printf("Phan tu thu can tim la: %d\n", k, arr[k - 1]);
    } else {
        printf("Khong co phan tu thu %d trong mang.\n", k);
    }
    return 0;
}

