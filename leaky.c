#include <stdlib.h>
#include <stdio.h>

void leaky_function() {
    int* arr = malloc(sizeof(int) * 10);
    arr[0] = 42;
    free(arr); // Fix leak
}

void invalid_access() {
    int* ptr = malloc(sizeof(int));
    *ptr = 100; // Write while memory is valid
    free(ptr);
}

int main() {
    leaky_function();
    invalid_access();
    return 0;
}
