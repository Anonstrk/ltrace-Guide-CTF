#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *key = getenv("SECRET_KEY");
    
    if (!key) {
        key = "DEFAULT_KEY_12345";
    }
    
    char input[50];
    printf("Enter key: ");
    scanf("%s", input);
    
    if (strcmp(input, key) == 0) {
        printf("Access granted!\n");
    }
    
    return 0;
}
