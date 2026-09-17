#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *api_key = getenv("API_KEY");
    
    if (!api_key) {
        api_key = "sk-12345abcdefghijklmnop67890";
    }
    
    printf("Initializing API...\n");
    printf("Connecting to server...\n");
    
    return 0;
}
