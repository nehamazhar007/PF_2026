#include<stdio.h>

int sumshelf(const int *shelf, int count);
int findlargestshelf(const int *count, int shelves);

int main() {
    int shelfA[] = {101,102,103};
    int shelfB[] = {201, 202};
    int shelfC[] = {301,302,303,304};

    int *shelves[] = {shelfA, shelfB, shelfC};
    int counts[] = {3,2,4};
    int numshelves =  sizeof(counts) / sizeof(counts[0]);

    for(int i=0; i<numshelves; i++){
        int total = sumshelf(shelves[i], counts[i]);
        printf("shelf %d ID total: %d\n", i+1, total);
    }  

    int largestidx = findlargestshelf(counts, numshelves);
    printf("shelf with the most books: shelf %d (%d books)\n", largestidx + 1, counts[largestidx]);
    
    return 0;
}

int sumshelf(const int *shelf, int count){
    int total = 0;
    for(int i=0; i<count; i++){
        total += shelf[i];
    }
    return total;
}

int findlargestshelf(const int *counts, int shelves){
    int largestidx = 0;
    for(int i=0; i<shelves; i++){
        if(counts[i]>counts[largestidx]){
            largestidx = i;
        }
    }
    return largestidx;
}