#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *file;
    char name[100];
    
    file = fopen("student.txt","w");
    if(file == NULL){
        printf("error opening file\n");
        return 1;
    }

    printf("enter 3 student names:\n");
    for(int i=0; i<3; i++){
        fgets(name, 20,stdin);
        fputs(name,file);
    }

    fclose(file);

    file = fopen("student.txt","r");
    if(file == NULL){
        printf("error in opening\n");
        return 1;
    }

    int count = 0;
    while(fgets(name,20,file) != NULL){
        count++;
        printf("%d. %s",count,name);
    }

    printf("total students in file:%d\n",count);

    fclose(file);
    return 0;

}