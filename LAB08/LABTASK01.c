#include<stdio.h>

void bubblesort(int *arr, int n);
void printarray(const int *arr, int n);

int main() {
    int arr[20];
    int n;
    do{
    printf("enter the number of scores\n");
    scanf("%d",&n);
    if(n<1 || n>20){
        printf("invalid sixe\n");
    }
}
    while(n<1 || n>20);
    
    printf("enter the scores into an array\n");
    for(int i=0; i<n; i++){
        scanf("%d",arr + i);
    }

    printf("before sorting\n");
    printarray(arr, n);

    bubblesort(arr, n);

    printf("after sorting\n");
    printarray(arr,n);

    return 0;
}

void bubblesort(int *arr, int n){
    for(int i=0; i<n-1;i++){
        for(int j =0; j< n-i-1; j++){
            if(*(arr+j)>*(arr+j+1)){
                int temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}

void printarray(const int *arr, int n){
    for(int i =0; i<n; i++){
        printf("%d \t", *(arr+i));
    }
    printf("\n");
}

                    
