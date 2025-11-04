#include <stdio.h>

int main() {
    printf("NAME : Raju K B\n USN:1SV24CS110\n");
    int arr[5] = {1,2,3,4,5};
    int n, i, val, pos = 2;
    n = 5; val = 99;

    for (i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = val;
    n++;

    for (i = 0; i < n; i++)
        printf("arr[%d]=%d\n", i, arr[i]);

    return 0;
}
