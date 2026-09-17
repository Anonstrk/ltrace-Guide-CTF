#include <stdio.h>
#include <string.h>

int main() {
    char flag[100] = "FLAG{welcome_to_ctf}";
    char input[100];
    
    printf("Find the flag: ");
    scanf("%s", input);
    
    if (strcmp(input, flag) == 0) {
        printf("Correct!\n");
    } else {
        printf("Wrong!\n");
    }
    
    return 0;
}
