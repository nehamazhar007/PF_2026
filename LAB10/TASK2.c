#include<stdio.h>
#include<string.h>
int main() {
    char firstname[15];
    char secondname[15];
    char fullname[30];

    printf("enter the first name:\n");
    fgets(firstname, 15, stdin);
    firstname[strcspn(firstname, "\n")] = '\0';

    printf("enter the second name:\n");
    fgets(secondname, 15, stdin);
    secondname[strcspn(secondname, "\n")] = '\0';

    strcpy(fullname, firstname);
    strcat(fullname, " ");
    strcat(fullname, secondname);

    printf("fullname: %s\n", fullname);

    return 0;
}