#include <stdio.h>
int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = 5;
    int x = 3;
    int i, found = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d duoc tim thay tai chi so %d\n", x, i);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Khong tim thay\n");
    }
    return 0;
}

