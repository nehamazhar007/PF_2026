#include<stdio.h>

int isvalidmark(int m){
    if(m>=0 && m <=100){
        return 1;
    }
    return 0;
}

void findminmax(int arr[], int size, int *min, int *max){
    *min = arr[0];
    *max = arr[0];

    for(int i=1; i< size; i++){
        if(arr[i] < *min){
            *min = arr[i];
        }
        if(arr[i] > *max){
            *max = arr[i];
        }
    }
}

int main() {
    int marks[5];

    for(int i=0; i<5; i++){
        do{
            printf("enter marks of %d: \n", i+1);
            scanf("%d", &marks[i]);

            if(!isvalidmark(marks[i])){
                printf("invalid input, enter agian\n");
            }
        }while(!isvalidmark(marks[i]));
    }

    int lowest, highest;
    findminmax(marks, 5, &lowest, &highest);
    printf("lowest marks: %d\n", lowest);
    printf("highets marks:%d \n",highest);

    return 0;
}