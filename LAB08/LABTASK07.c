#include<stdio.h>

void printarray(const int *arr, int n){
    for(int i =0; i<n; i++){
        printf("%d \t", *(arr+i));
    }
    printf("\n");
}

void reversearray(int *arr, int n){
    int *start = arr;
    int *end = arr + n - 1;

    while(start < end){
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    int n;
    do{
    printf("enter the number of songs:\n");
    scanf("%d",&n);
    if(n>20 || n<1){
        printf("invalid size, enter agian \n");
    }
}while(n>20 || n<1);

printf("enter the song ids: \n");
int songs[n];
for(int i =0; i<n; i++){
    scanf("%d", &songs[i]);
}

printf("original: \n");
printarray(songs, n);

reversearray(songs, n);

printf("reversed:\n");
printarray(songs ,n);


return 0;
}