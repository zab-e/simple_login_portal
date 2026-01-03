#include <stdio.h>
#include <string.h>

#define red "\033[31m"
#define reset "\033[0m"
#define green "\033[32m"
#define blue  "\033[34m"

struct user {
    char username[20];
    char password[20];
    char userinput1[20];
    char userinput2[20];
};

int main () {
    struct user user1,user2;
    
    strcpy(user1.username,"admin");
    strcpy(user1.password,"admin");
    strcpy(user2.username,"user");
    strcpy(user2.password,"user");
    
    printf(blue"Choose user(admin,user):\n"reset);
    fgets(user1.userinput1,sizeof(user1.userinput1), stdin);
    user1.userinput1[strcspn(user1.userinput1, "\n")] = 0;
    
    if (strcmp(user1.userinput1,user1.username) == 0 || strcmp(user1.userinput1,user2.username) == 0) {
        if (strcmp(user1.userinput1, "admin") == 0) {
            printf(blue"Enter your login password:\n"reset);
            fgets(user1.userinput2,sizeof(user1.userinput2), stdin);
            user1.userinput2[strlen(user1.userinput2) - 1] ='\0';
            if (strcmp(user1.userinput2,"admin") == 0) {
                printf(green"You have logged in succesfull\n"reset);
            } else {
                printf(red"Error:Incorrect password\n"reset);
            }
        } else if (strcmp(user1.userinput1, "user") == 0) {
            printf(blue"Enter login password:\n"reset);
            fgets(user2.userinput2,sizeof(user2.userinput2), stdin);
            user2.userinput2[strcspn(user2.userinput2, "\n")] = 0;
            if (strcmp(user2.userinput2, "user") == 0) {
                printf(green"You have succesfully logged in\n"reset);
            } else {
                printf(red"ERROR:Incorrect password\n"reset);
            }
        }  
    } else {
        printf(red"Incorrect username\n"reset);
    }
    
    return 0;
}