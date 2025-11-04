#include <stdio.h>
int main() {
    printf("NAME: Raju K B\nUSN: 1SV24CS110\n");
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5, i, key, found = 0;
    printf("Enter element to find: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Not found\n");
    return 0;
}
