#include "registration.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void registerPatient()
{
 //First step is to open my database and get the patients.txt file to edit it. Append mode e jawa lagbe age then shob kichu korte parbo

 FILE *fp = fopen("patients.txt", "a");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
//Variables declare korsi
char name[100], email[100], phone[20], password[30];
int age;
float weight;

printf("You have selected the patient register option. \nPlease fill the form up to continue your registration.\n\nPatient Registration Form:\n");

printf("Enter Your Name: ");
    getchar(); //previous input theke line clear korlam
    fgets(name, sizeof(name), stdin); //fgets diye input nicchi
    name[strcspn(name, "\n")] = 0; //Notun line shoraitesi

printf("Age: ");
    scanf("%d", &age);

printf("Weight (kg): ");
    scanf("%f", &weight);

printf("Email: ");
    scanf("%s", email);

printf("Phone Number: ");
    scanf("%s", phone);

printf("Set a Password: ");
    scanf("%s", password);


//Patients.txt file e data dicchi
fprintf(fp, "%s,%s,%s,%d,%s,%.2f\n", phone, password, name, age, email, weight);

fclose(fp);

printf("\n\nRegistration Successfully Done!\n");
printf("Your Details:\nName: %s,\nPhone Number: %s,\nAge: %d,\nEmail: %s,\n Weight: %.2f,\nPassword: %s\n",name, phone, age, email, weight, password);


}
