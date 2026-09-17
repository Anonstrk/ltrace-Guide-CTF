#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Different libraries का उपयोग
    
    // ===== LIBC FUNCTIONS =====
    char *name = malloc(50);
    strcpy(name, "Hello");
    printf("String: %s\n", name);
    free(name);
    
    // ===== MATH LIBRARY FUNCTIONS =====
    double result = sqrt(16.0);
    printf("Square root of 16: %f\n", result);
    
    // ===== MORE LIBC =====
    int len = strlen("test");
    printf("Length: %d\n", len);
    
    return 0;
}
