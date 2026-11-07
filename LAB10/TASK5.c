#include<stdio.h>
#include<string.h>
int main() {
    char cities[5][30];
    printf("enter the cities:\n");
    for(int i=0; i<5; i++){
        fgets(cities[i], sizeof(cities[i]), stdin);
        cities[i][strcspn(cities[i], "\n")] = '\0';
    }
    
    printf("all cities\n");
    for(int i=0; i<5; i++){
        printf("%s\n",cities[i]);
    }

    printf("\n");

    int max = 0;
    int idx = -1;
    for(int i=0; i<5; i++){
        int len = strlen(cities[i]);
        if(len>max){
        max = len;
        idx = i;
        }
    }
    printf("the longest cities %s with length %d\n",cities[idx], max);
    return 0;

}