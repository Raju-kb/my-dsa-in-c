#include <stdio.h>

int main() {
    int num = 10;       // Declare an integer variable
    int *ptr;           // Declare a pointer to int

    ptr = &num;         // Assign the address of num to ptr

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr (address stored): %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr); // Dereference pointer

    return 0;
}
