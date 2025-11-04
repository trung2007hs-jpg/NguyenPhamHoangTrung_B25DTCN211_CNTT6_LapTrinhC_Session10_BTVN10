#include <stdio.h>
int main() {
    int n = 6;
    int arr[6] = {1, 2, 3, 4, 2, 2};
    int value = 2;
    int i, count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == value) {
            count++;
        }
    }
    if (count > 0) {
        printf("Gia tri %d xuat hien %d lan trong mang.\n", value, count);
    } else {
        printf("Gia tri %d khong ton tai trong mang.\n", value);
    }
    return 0;
}

