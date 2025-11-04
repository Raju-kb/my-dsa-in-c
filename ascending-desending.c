#include <stdio.h>
static void print_array(const int *a, int n, const char *label) {
    int i;
    printf("%s", label);
    for (i = 0; i < n; i++) printf("%s%d", i ? " " : "", a[i]);
    printf("\n");}
int main(void) {
    printf("NAME : Raju K B\nUSN: 1SV24CS110\n");
    int arr[5] = {78,45,43,47,84};
    int n = 5;
    print_array(arr, n, "Before sorting: ");
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                swapped = 1;
            }
        }
        if (!swapped) break; // already sorted
    }
    print_array(arr, n, "Sorted (asc):   ");
    return 0;
}
