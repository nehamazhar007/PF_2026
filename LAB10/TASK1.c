#include<stdio.h>
#include<string.h>
int main() {
    char name[20];
    char copy[20];
    printf("enter your name:\n");
    fgets(name, sizeof(name), stdin);
    name[ strcspn(name, "\n")] = '\0';
    strcpy(copy,name);
    printf("the length is %zu\n", strlen(name));
    printf("the copied name is %s\n",copy);
    printf("the size is %zu\n",sizeof(name));

    return 0;
}