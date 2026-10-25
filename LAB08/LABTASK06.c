#include <stdio.h>

int deposit(float *balance, float amount);
int withdraw(float *balance, float amount);

int main()
{
    float balance = 1000;
    float amount;
    int choice;

    do
    {
        printf("Choose option (1-4): ");
        if (scanf("%d", &choice) != 1)
        {
            while (getchar() != '\n');
            choice = 0;
        }

        switch (choice)
        {
            case 1:
                printf("Enter amount: ");
                if (scanf("%f", &amount) != 1)
                {
                    while (getchar() != '\n');
                    amount = 0;
                }
                if (deposit(&balance, amount))
                    printf("Amount deposited successfully.\n");
                else
                    printf("Invalid amount.\n");
                break;
            case 2:
                printf("Enter amount: ");
                if (scanf("%f", &amount) != 1)
                {
                    while (getchar() != '\n');
                    amount = 0;
                }
                if (withdraw(&balance, amount))
                    printf("Amount withdrawn successfully.\n");
                else
                    printf("Insufficient funds or invalid amount.\n");
                break;
            case 3:
                printf("Current balance: %.2f\n", balance);
                break;
            case 4:
                printf("Goodbye.\n");
                break;
            default:
                printf("Invalid option\n");
        }
    } while (choice != 4);

    return 0;
}

int deposit(float *balance, float amount)
{
    if (amount <= 0)
        return 0;
    *balance += amount;
    return 1;
}

int withdraw(float *balance, float amount)
{
    if (amount <= 0 || amount > *balance)
        return 0;
    *balance -= amount;
    return 1;
}