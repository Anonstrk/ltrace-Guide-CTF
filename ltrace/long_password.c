#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    
    printf("Enter password: ");
    scanf("%s", input);
    
    // एक बहुत लंबा password
    if (strcmp(input, "ThisIsAVeryLongPasswordThatIsMoreThan32Characters") == 0) {
        printf("Correct!\n");
    } else {
        printf("Wrong!\n");
    }
    
    return 0;
}
