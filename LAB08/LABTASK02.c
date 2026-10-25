#include<stdio.h>
void swap(float *x, float *y){
    float temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    float a,b;
    printf("enter price one: \n");
    scanf("%f", &a);
    printf("enter the second price: \n");
    scanf("%f",&b);

    printf("\nbefore swap a is %f \n before swap b is %f \n", a, b);

    swap(&a,&b);

    printf("\nafter swap a is %f \n after swap b is %f \n", a, b);


    return 0;
}