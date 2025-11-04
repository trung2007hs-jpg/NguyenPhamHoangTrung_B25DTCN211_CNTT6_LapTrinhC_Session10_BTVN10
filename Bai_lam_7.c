#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int x = 3;
    int left = 0, right = n - 1;
    int mid;
    int found = -1;
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
        printf("Chi so cua phan tu la: %d\n", found);
    else
        printf("Khong tim thay\n");
    return 0;
}


