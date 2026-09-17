#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    
    printf("Enter something: ");
    scanf("%s", input);
    
    if (strcmp(input, "ShortPass") == 0) {
        printf("Found short!\n");
    }
    
    if (strcmp(input, "VeryVeryVeryVeryVeryLongPasswordWith50CharactersOrMore") == 0) {
        printf("Found long!\n");
    }
    
    return 0;
}
