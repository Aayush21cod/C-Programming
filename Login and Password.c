#include <stdio.h>
#include <string.h>

int main(void)
{
    char username[20], password[20];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, "admin") == 0)
    {
        if (strcmp(password, "password") == 0)
        {
            printf("Login successful! Admin access granted.\n");
        }
        else
        {
            printf("Incorrect password for admin.\n");
        }
    }
    else
    {
        printf("Invalid username.\n");
    }

    return 0;
}
