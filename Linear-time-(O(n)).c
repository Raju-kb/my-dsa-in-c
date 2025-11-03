#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;
    long long i, n = 100000000; // adjust n for longer time

    start = clock();

    long long sum = 0;
    for (i = 0; i < n; i++) {
        sum += i;
    }

    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Sum = %lld\n", sum);
    printf("Execution time (O(n)): %f seconds\n", cpu_time_used);

    return 0;
}
