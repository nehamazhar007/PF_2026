#include<stdio.h>
#include<string.h>
int main() {
    char names[5][30];
    char temp[30];

    printf("enter the names\n");
    for(int i=0; i<5; i++){
        scanf("%s", names[i]);
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4-i;j++){
            if(strcmp(names[j], names[j+1]) > 0) {
            strcpy(temp, names[j]);
            strcpy(names[j], names[j+1]);
            strcpy(names[j+1], temp);
        }
    }
}
printf("\n");
    printf("sorte dnames\n");
    for(int i=0; i<5; i++){
        printf("%s\n",names[i]);
    }
        return 0;

}