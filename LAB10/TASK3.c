#include<stdio.h>
#include<string.h>
int main() {
    char pass1[15] = "lab10pass";
    char pass2[15];
    printf("enter the password:\n");
    scanf("%s",&pass2);
    if(strcmp(pass2, pass1) == 0){
        printf("access granted\n");
    }
    else{
        printf("access denied\n");
    }
    if(strncmp(pass2,pass1,3)==0){
        printf("the first 3 characters match\n");
    }
    return 0;
}