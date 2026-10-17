//Write a C program that performs complete matrix analysis on a 3×3 matrix. Your program should handle all major operations including transpose, determinant, cofactor, adjoint, and inverse using only nested loops.
#include<stdio.h>
int main() {

    float arr[3][3];
    printf("enter the elements of the 3x3 matrix: \n");
    for(int i=0; i<3; i++){
        for(int j =0; j<3; j++){
            if(scanf("%f", &arr[i][j]) != 1){
                printf("invalid input! try again later \n");
                return 0;
            }
        }
    }

    //transpose
    float transpose[3][3];
    for(int i =0; i<3; i++){
        for(int j =i; j<3; j++){
         transpose[j][i] = arr [i][j];       
        }
    }
    //output transpose
    printf("output transpose\n");
    for(int i =0; i<3; i++){
        for(int j =0; j<3; j++){
            printf("%.2f \t", transpose[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    //cofactor
    float cofactor[3][3];
    for(int i =0; i<3; i++){
        for(int j =0; j<3; j++){
            int r1= (i == 0)? 1:0;
            int r2= (i == 2)? 1:2;
            int c1= (j == 0)? 1:0;
            int c2= (j == 2)? 1:2;

            float sub_det= arr[r1][c1]*arr[r2][c2] - arr[r1][c2]*arr[r2][c1];

            float sign = ((i+j)%2 == 0)? 1:-1;

            cofactor[i][j] = sign * sub_det;
        }
    }
    //cofactor output
    printf("output cofactor\n");
    for(int i =0; i<3; i++){
        for(int j =0; j<3; j++){
            printf("%.2f \t", cofactor[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    //det 
    float det = (arr[0][0]*arr[1][1]*arr[2][2]-arr[0][0]*arr[1][2]*arr[2][1]) - (arr[0][1]*arr[1][0]*arr[2][2]-arr[0][1]*arr[1][2]*arr[2][0])+(arr[0][2]*arr[1][0]*arr[2][1]-arr[0][2]*arr[1][1]*arr[2][0]);
    //output det
    printf("output det\n");
    printf("det is %.2f",det);
    printf("\n\n");

    //adj 
    float adj[3][3];
    for(int i =0; i<3; i++){
    for(int j =i; j<3; j++){
        adj[j][i] = cofactor[i][j];
    }
}
    
    //output adjoint
    printf("ouput adj\n");
    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%.2f \t",adj[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    //inverses 
    if(det == 0){
        printf("the inverse doesnt exist\n");
    }else{
    float inverse[3][3];
    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            inverse[i][j] = adj[i][j] / det;
        }
    }
    //output inverse
    printf("output inverse\n");
    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%.2f \t", inverse[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

return 0;
}
