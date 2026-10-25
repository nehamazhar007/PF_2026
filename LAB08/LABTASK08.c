#include<stdio.h>

void computetotals(int(*marks)[3], int rows, int totals[]);
int findtopper(const int *totals, int rows);

int main() {
    int marks[3][3];
    int totals[3] = {0};

    printf("enter the marks:\n");
    for(int i=0;i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",*(marks + i)+j);
        }
    }

    computetotals(marks, 3, totals);
    for(int i=0; i<3; i++){
        printf("total for students %d: %d\n", i+1, *(totals+i));
    }

    int topperindex = findtopper(totals, 3);
    printf("student %d is the topper with total %d\n", topperindex + 1, *(totals+topperindex));
    
    return 0;
    
}

void computetotals(int(*marks)[3], int rows, int totals[]){
    for(int i=0;i<3; i++){
        int row_sum = 0;
        for(int j=0; j<3; j++){
            row_sum += *(*(marks + i) +j);     
        }
        *(totals+i) = row_sum;
    }
}

int findtopper(const int *totals, int rows){
    int maxindex = 0;
    for(int i=0; i<3; i++){
        if(*(totals+i)>*(totals + maxindex)){
            maxindex = i;
        }
    }
    return maxindex;
}
