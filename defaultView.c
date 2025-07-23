#include <stdio.h>

void defaultPage()
{
    printf("\033[1;36m");  // Bold + Cyan
    printf("******************************************\n");
    printf("           AMADER PROJECT NAME            \n");
    printf("******************************************\n");
    printf("\033[0m"); // Reset 
    printf("Welcome to \"Amader Project NAME\"\n");
    printf("Menu Options:\n");
    printf("1. Registration (For Patients Only)\n");
    printf("2. Login (As Patient, Doctor, Admin)\n");
    printf("3. Emergency Contacts\n");
    printf("4. About Us\n");
    printf("5. Exit\n");
    printf("\n");

    printf("Enter any option (1-5) to continue: ");


    /* COLOR CODES
Red: \033[1;31m

Green: \033[1;32m

Yellow: \033[1;33m

Blue: \033[1;34m

Magenta: \033[1;35m

Cyan: \033[1;36m

White: \033[1;37m
    
*/
}