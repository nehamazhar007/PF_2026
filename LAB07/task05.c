#include<stdio.h>
int main() {
    int arr[3][3][3];

    printf("enter the ekements of the matrix:\n");
    for(int k=0; k<3; k++){
        for(int i =0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("Enter value for Layer %d, Row %d, Col %d: \n", k + 1, i + 1, j + 1);
                scanf("%d", &arr[k][i][j]);
            }
        }
    }

    for(int k=0; k<3; k++){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("%d \t", arr[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    for(int l1 = 0; l1<3; l1++){
        for(int l2 = l1 + 1; l2<3; l2++){
            int isidentical = 1;
            for(int i=0; i<3;i++){
            for(int j=0; j<3; j++){
            if(arr[l1][i][j] != arr[l2][i][j]){
                isidentical = 0;
                break;
            }
        }
        if(! isidentical) break;
    }

    if(isidentical == 1 ){
        printf("Layer %d and Layer %d are IDENTICALLY matching.\n", l1 + 1, l2 + 1);
            } else {
                printf("Layer %d and Layer %d are DISTINCT.\n", l1 + 1, l2 + 1);
            }
        }
    }
    return 0;
}
        


