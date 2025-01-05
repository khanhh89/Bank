#include <stdbool.h>

typedef struct {
    char id[20];
    char name[50];
    char email[50];
    char phone[15];
    char status[15];
    int gender; // 0: Nam, 1: Nu
    int day;
    int month;
    int year;
    char username[20];
    double balance;
    char password[20];
} User;

typedef struct {
    char transactionType[20]; 
    float amount;              
    char date[20];            
} Transaction;






