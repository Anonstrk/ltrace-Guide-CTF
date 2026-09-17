#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];
    
    printf("========== BANK LOGIN ==========\n");
    printf("Username: ");
    scanf("%s", username);
    
    printf("Password: ");
    scanf("%s", password);
    
    // Admin check
    if (strcmp(username, "bankadmin") == 0 && 
        strcmp(password, "Secure@Bank2024!") == 0) {
        printf("\n✓ Admin Access Granted!\n");
        printf("Balance: $1,000,000\n");
    } else {
        printf("\n✗ Invalid Credentials\n");
    }
    
    return 0;
}
