#include <stdio.h>
#include <string.h>

int main() {
    char input[50];
    
    printf("Level 1: ");
    scanf("%s", input);
    
    if (strcmp(input, "PASS_LEVEL1") == 0) {
        printf("Level 1 passed!\n");
        
        printf("Level 2: ");
        scanf("%s", input);
        
        if (strcmp(input, "PASS_LEVEL2") == 0) {
            printf("Level 2 passed!\n");
            
            printf("Level 3: ");
            scanf("%s", input);
            
            if (strcmp(input, "FLAG{multi_level_hack}") == 0) {
                printf("YOU WIN!\n");
            }
        }
    }
    
    return 0;
}
