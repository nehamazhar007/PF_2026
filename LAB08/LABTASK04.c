#include<stdio.h>

float averagesteps(int *steps, int n){
    int sum = 0.0;
    for(int i =1; i<=n; i++){
        sum += *(steps + i);
    }

    return (float)sum / n;
}

int countgoaldays(int *steps, int n, int goal){
    int count = 0;
    for(int i =0; i<n; i++){
        if(*(steps + i) >= goal){
            count++;
        }
    }
    return count;
}

int main() {
    int steps[7];
    int n =7;
    int goal = 8000;

    for(int i =0; i<n; i++){
        printf("enter steps for day %d: \n", i+1);
        scanf("%d",&steps[i]);
    }

    float avg = averagesteps(steps, n);
    int goaldays = countgoaldays(steps, n, goal);

    printf("average steps : %.2f\n", avg);
    printf("days goal reached: %d\n", goaldays);

return 0;
}

