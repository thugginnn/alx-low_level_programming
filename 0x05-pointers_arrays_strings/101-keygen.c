#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

char generateRandomChar() {
    // Generate a random character between ASCII 33 and 126
    return (char)(rand() % 94 + 33);
}

int main(void) {
    // Seed the random number generator with the current time
    srand(time(NULL));

    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
    int i;

    // Generate random characters for the password
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = generateRandomChar();
    }

    password[PASSWORD_LENGTH] = '\0'; // Null terminate the password string

    // Print the generated password
    printf("Generated password: %s\n", password);

    return 0;
}
