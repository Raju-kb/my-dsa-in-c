#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;
    long long i, j, n = 10000; // smaller n to avoid long run

    start = clock();

    long long count = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            count++;
        }
    }

    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Count = %lld\n", count);
    printf("Execution time (O(n^2)): %f seconds\n", cpu_time_used);

    return 0;
}
