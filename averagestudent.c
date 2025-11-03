#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *marks, sum = 0.0, avg;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Allocate memory dynamically for n students
    marks = (float *)malloc(n * sizeof(float));

    if (marks == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter marks for %d students:\n", n);
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    avg = sum / n;
    printf("\nAverage marks = %.2f\n", avg);

    free(marks); // Free allocated memory
    return 0;
}
