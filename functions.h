#include "dataType.h"
void menuStart();
void menuAdmin();
void printUser(User users[50], int userCount);
void addUser(User users[50],int *userCount);
int isValidEmail(const char* email);
int isValidPhoneNumber(const char* phone);
void account(int *a); 
void searchUserByID(User users[], int userCount);
void searchUserByName(User users[50], int userCount);
int isValidDate(int day, int month, int year);
int isDuplicate(User users[], int n, const char* id, const char* phone, const char* email, const char* username);
void lockUnlockUser(User users[50], int userCount);
void sortUsers(User users[50], int userCount);
void handleAdminMenuOrExit();
void luuFile(User users[], int userCount);
void loadFile(User users[], int *userCount);


void userAccess(User users[], int userCount);
// Khai báo hàm userLogin

void changePassword(User *user);

int userLogin(User users[], int userCount);
void menuUsers();
void displayUserDetails(User users[], int userCount);
void editUserInfo(User *user);
void withdrawMoney(User user);
void changePassword(User *user);

