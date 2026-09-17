#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];
    char secret[50] = "HIDDEN_DATA_XYZ";
    
    printf("Username: ");
    scanf("%s", username);
    
    printf("Password: ");
    scanf("%s", password);
    
    if (strcmp(username, "admin") == 0 && 
        strcmp(password, "password123") == 0) {
        printf("Welcome!\n");
        printf("Your secret: %s\n", secret);
    }
    
    return 0;
}
