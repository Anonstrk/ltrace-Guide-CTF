#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    
    printf("Question 1: What is 2+2? ");
    scanf("%s", input);
    
    if (strcmp(input, "4") == 0) {
        printf("Correct!\n");
        
        printf("Question 2: What is the flag? ");
        scanf("%s", input);
        
        if (strcmp(input, "FLAG{you_are_hacker}") == 0) {
            printf("YOU WIN! FLAG{two_flags_found}\n");
        }
    } else {
        printf("Wrong!\n");
    }
    
    return 0;
}
