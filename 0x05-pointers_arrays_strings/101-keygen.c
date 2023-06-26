#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

char *generatePassword() {
    char *password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));  // Allocate memory for password

    // Characters to be used in the password
    const char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    // Seed the random number generator
    srand(time(NULL));

    // Generate random characters for the password
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int randomIndex = rand() % (sizeof(characters) - 1);
        password[i] = characters[randomIndex];
    }

    password[PASSWORD_LENGTH] = '\0';  // Add null terminator

    return password;
}

int main() {
    char *password = generatePassword();

    printf("Generated Password: %s\n", password);

    free(password);  // Free the allocated memory

    return 0;
}
