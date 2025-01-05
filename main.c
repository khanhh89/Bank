#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main(int argc, char *argv[]) {
    User users[50];
    int userCount = 0;
    int choice;
    int a = 0;

    while (1) {
        menuStart();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                account(&a);
                loadFile(users, &userCount);
                do {
                    menuAdmin();
                    printf("Enter your choice: ");
                    scanf("%d", &choice);
                    switch (choice) {
                        case 1:
                            addUser(users, &userCount);
                            break;
                        case 2:
                            printUser(users, userCount);
                            break;
                        case 3:
                            searchUserByName(users, userCount);
                            break;
                        case 4:
                            searchUserByID(users, userCount);
                            break;
                        case 5:
                            lockUnlockUser(users, userCount);
                            break;
                        case 6:
                            sortUsersByName(users, userCount);
                            break;
                        case 0:
                            printf("Exiting Admin Menu.\n");
                            break;
                        default:
                            printf("Invalid choice. Please try again.\n");
                            break;
                    }
                } while (choice != 0);
                break;
        	case 2:
                if (userLogin(users, userCount)) {
                    printf("Welcome to the system!\n");
                    do {
                        menuUsers(); 
                        printf("Enter your choice: ");
                        scanf("%d", &choice);
                        switch (choice) {
                            case 1:
                                displayUserDetails(users, userCount);
                                break;
                            case 2:
                                editUserInfo(users);
                                break;
                            case 3: 
                            
                            case 0:
                                printf("Logging out...\n");
                                break;
                            default:
                                printf("Invalid choice. Please try again.\n");
                                break;
                        }
                    } while (choice != 0);
                } else {
                    printf("Login failed. Please try again.\n");
                }
                break;

            case 0:
                printf("Exiting the program.\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
    return 0;
}

