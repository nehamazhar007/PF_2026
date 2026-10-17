#include<stdio.h>
int main(){

    int n = 3;
    int max;
    int min;
    int totalsum = 0;

    int arr[3][3][3];
    printf("enter elements of the array:\n");
    for(int k=0; k<3;k++){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("Enter value for Layer %d, Row %d, Col %d: ", k + 1, i + 1, j + 1);
                scanf("%d",&arr[k][i][j]);
            }
        }
    }
    max = arr[0][0][0];
    min = arr[0][0][0];

    for(int k=0; k<3;k++){
        int layersum=0;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                layersum+=arr[k][i][j];
                if(arr[k][i][j] > max) max = arr[k][i][j];
                if(arr[k][i][j] < min) min = arr[k][i][j];
            }
        }
        totalsum += layersum;
        printf("sum of layer is %d: %d\n", k+1, layersum);
    }

    float avg = totalsum / 27;
    printf("\n--- Overall Data Insights ---\n");
    printf("Grand Total Sum: %d\n", totalsum);
    printf("Overall Average: %.2f\n", avg);
    printf("Maximum Value: %d\n", max);
    printf("Minimum Value: %d\n", min);

    for(int k=0; k<3;k++){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("%d \t", arr[k][i][j]);//output matrix
            }
            printf("\n");
        }
        printf("\n");
    }
           
    

return 0;
}
