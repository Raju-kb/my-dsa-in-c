// Delete element at beginning of array
#include <stdio.h>

int main() {
    printf("NAME: Raju K B \nUSN: 1SV24CS110\n");
    int arr[5] = {100, 87, 90, 44, 33};
    int n = 5;
    int i;
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Array after deleting first element:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
