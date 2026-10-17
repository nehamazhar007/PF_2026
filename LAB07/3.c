//Write a C program to multiply two matrices (maximum size 3×3).
//The program should validate dimensions before multiplication and perform the process using three nested loops. Display all matrices involved and the final result.

#include<stdio.h>
int main() {

    int arr[3][3];
    printf("enter a 3x3 1st matrix's elements: \n"); //input first matrix
    for(int i = 0; i<3; i++){
        for(int j =0; j<3; j++){
            if(scanf("%d", &arr[i][j]) != 1){
                printf("invalid input \n");
                return 0;
            }
        }
    }

    int brr[3][3];
    printf("enter a 3x3 2nd matrix's elements: \n"); //input sec matrix
    for(int i = 0; i<3; i++){
        for(int j =0; j<3; j++){
            scanf("%d", &brr[i][j]);
        }
    }

    int res[3][3];
    for(int i =0; i<3; i++){
        for(int j =0; j<3; j++){
            res[i][j] = 0;
            for(int k =0; k<2; k++){
            res[i][j] += (arr[i][k]*brr[k][j]);
            }
        }
    }

    for(int i =0; i<3; i++){
        for(int j =0; j<3; j++){
            printf("%d \t", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
    
        

        
    


