#include <stdio.h>

int square(int x);
int negate(int x);
int isEven(int x);
int isPositive(int x);
void applyToArray(int *arr, int n, int (*fn)(int));
int countIf(const int *arr, int n, int (*pred)(int));
void printGeneric(void *data, char type, int n);

int main()
{
    int arr[50] = {3, -2, 8, -5, 6};
    float f[] = {1.5, 2.25};
    int n;

    do{
        printf("Enter n (1-50): ");
        if (scanf("%d", &n) != 1)
        {
            while (getchar() != '\n');
            n = 0;
        }
        if (n < 1 || n > 50)
            printf("Invalid n. Try again.\n");
    } while (n < 1 || n > 50);

    printf("Original: ");
    printGeneric(arr, 'i', n);

    applyToArray(arr, n, negate);
    printf("After negate: ");
    printGeneric(arr, 'i', n);

    printf("Positive values after negate: %d\n", countIf(arr, n, isPositive));
    printf("Even values after negate: %d\n", countIf(arr, n, isEven));

    printf("Float print (type f): ");
    printGeneric(f, 'f', 2);

    printGeneric(arr, 'x', n);

    return 0;
}

int square(int x)
{
    return x * x;
}

int negate(int x)
{
    return -x;
}

int isEven(int x)
{
    return x % 2 == 0;
}

int isPositive(int x)
{
    return x > 0;
}

void applyToArray(int *arr, int n, int (*fn)(int))
{
    int i;
    for (i = 0; i < n; i++)
        arr[i] = fn(arr[i]);
}

int countIf(const int *arr, int n, int (*pred)(int))
{
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        if (pred(arr[i]))
            count++;
    }
    return count;
}

void printGeneric(void *data, char type, int n)
{
    int i;

    if (type != 'i' && type != 'f' && type != 'c')
    {
        printf("Invalid type '%c' for printGeneric\n", type);
        return;
    }

    for (i = 0; i < n; i++)
    {
        if (type == 'i')
            printf("%d ", *((int *)data + i));
        else if (type == 'f')
            printf("%.2f ", *((float *)data + i));
        else
            printf("%c ", *((char *)data + i));
    }
    printf("\n");
}