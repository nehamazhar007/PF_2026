#include<stdio.h>
#include<string.h>
int main() {
    char sent[50];
    printf("enter the senetence:\n");
    fgets(sent, 50, stdin);
    sent[strcspn(sent, "\n")] = '\0';
    char *ptr = strchr(sent , 'a');
    if(ptr != NULL){
        int index = ptr - sent;
        printf("first 'a' is found at index %d\n", index);
    }
    char *ptr2 = strstr(sent, "good");
    if(ptr2 != NULL){
        printf("word 'good' found\n");
    }else{
        printf("word 'good'' not found\n");
    }

    return 0;
}