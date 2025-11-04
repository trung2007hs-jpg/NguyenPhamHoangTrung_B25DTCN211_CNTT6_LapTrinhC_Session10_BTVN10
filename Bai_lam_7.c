#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 2, 2};
    int n = 6;
    int value = 2;
    int count = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == value) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

