#include<stdio.h>
int main() {
    int r;
    int c;
    printf("enter the number of rows: \n");
    scanf("%d", &r);
    printf("enter the number of columns:\n");
    scanf("%d", &c);
    
    //check sqyare, rectangle, row and column mat
    if(r == c){
        printf("it is a square matrix \n");
    }
    else{
        printf("it is reactangular matrix \n");
    }
    if(r == 1 && r!=c){
        printf("it is a row matrix \n");
    }
    if(c==1 && r!= c){
        printf("it is a column matrix \n");
    }

    //input
    float arr[r][c];
    printf("enter the elements of the array:\n");
    for(int i =0; i<r; i++){
        for(int j =0; j<c; j++){
            scanf("%f",&arr[i][j]);      
            }
            } 

    //zero or null matrix check
    int zero = 0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j] != 0){
                zero++;
            }
        }
    }
    if(zero == 0){
        printf("it is a zero or null \n");
    }else{
        printf("not zero or null\n");
    }

            
    if(r==c){ //diagnal check
        int diagnal = 0;
        for(int i =0; i<r; i++){
            for(int j =0; j<c; j++){
                if(i!=j && arr[i][j]!=0){
                diagnal++;
                }
            }
        }
        if(diagnal == 0){
            printf("it is a diagnal matrix\n");
        }else{
            printf("it is not a diag matrix \n");
        }
        
        //scalar check
        int scalar=0;
        float refval = arr[0][0];
        for(int i =0; i<r; i++){
            for(int j =0; j<c; j++){
                if( i==j ){
                    if(arr[i][j] != refval){
                    scalar++;
                    }
                }
                else{
                    if(arr[i][j]!=0){
                        scalar++;
                    }
                }
            }
        }
        if(scalar == 0){
            printf("it is a scalar mat\n");
        if(refval == 1){
            printf("it is also an idnetity matrix\n");
        }
    }
 
    //upper triangle check
    if(r==c){
        int upper=0;
        for(int i =0; i<r;i++){
            for(int j =0; j<c; j++){
                if(i>j && arr[i][j] != 0){
                    upper++;
                }
            }
        }
        if(upper == 0){
            printf("it is an upper triangular matrix\n");
        }
        //lower traingle
        int lower =0;
        for(int i =0; i<r;i++){
            for(int j =0; j<c; j++){
                if(i<j && arr[i][j] != 0){
                    lower++;
                }
            }
        }
        if(lower == 0){
            printf("it is a lower triangular matrix\n");
        }
    }

    //symmetric matrix
    if(r==c){
        int symmetry=0;
        for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(arr[i][j] != arr[j][i]){
                symmetry++;
            }
        }
    }
    if(symmetry == 0){
        printf("it is symmetric matrix \n");
    }
}

//skew symmetric
if(r==c){
    int skew = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(i == j && arr[i][j] != 0){
                skew++;
            }
            if(arr[i][j] != -arr[j][i]){
                skew++;
            }
        }
    }
    if(skew == 0){
        printf("it is a skew symmetric matrix\n");
    }
}
//equal matrix
int r2, c2;
printf("enter the row:\n");
scanf("%d",&r2);
printf("enter the column:\n");
scanf("%d",&c2);

float brr[r2][c2];
printf("Enter elements for matrix 2:\n");
for(int i = 0; i < r2; i++){
    for(int j = 0; j < c2; j++){
        scanf("%f", &brr[i][j]);
    }
}
if(r == r2 && c == c2){
    int equal = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(arr[i][j] != brr[i][j]){
                equal++;
            }
        }
    }
    if(equal == 0){
        printf("The two matrix are equal\n");
    } else {
        printf("The two mat are not equal\n");
    }
} else {
    printf("Matrix have different dimensions, cant be equal\n");
}

//idempotent matrix
if(r == c){
    float prod[5][5] = {0};

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            for(int k = 0; k < c; k++){
                prod[i][j] += arr[i][k] * arr[k][j];
            }
        }
    }
    int idempotent = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(prod[i][j] != arr[i][j]){
                idempotent++;
            }
        }
    }
    if(idempotent == 0){
        printf("It is an idempotent matrix\n");
    }
}

//nilpotent Matrix
if(r == c){
    float currentpower[5][5];
    float nextpower[5][5];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            currentpower[i][j] = arr[i][j];
        }
    }
    int nilpotent = 0;

    for(int p = 1; p <= r; p++){
        int zerocount = 0;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(currentpower[i][j] == 0) zerocount++;
            }
        }
        if(zerocount == (r * c)){
            nilpotent = 1;
            break;
        }
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                nextpower[i][j] = 0;
                for(int k = 0; k < c; k++){
                    nextpower[i][j] += currentpower[i][k] * arr[k][j];
                }
            }
        }
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                currentpower[i][j] = nextpower[i][j];
            }
        }
    }
    if(nilpotent){
        printf("It is a nilpotent matrix\n");
    }
}
    }

   
return 0;
}
    
