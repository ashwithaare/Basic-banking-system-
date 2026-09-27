#include <stdio.h>

// Function prototypes
void createAccount();
void deposit();
void withdraw();
void checkBalance();

int accountNumber = 0;
float balance = 0.0;

int main()
{
    int choice;

    while (1)
    {
        printf("\n--- BASIC BANKING SYSTEM ---\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                createAccount();
                break;

            case 2:
                deposit();
                break;

            case 3:
                withdraw();
                break;

            case 4:
                checkBalance();
                break;

            case 5:
                printf("Exiting the system...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

// Function to create an account
void createAccount()
{
    printf("Enter new Account Number: ");
    scanf("%d", &accountNumber);

    balance = 0;

    printf("Account created successfully!\n");
}

// Function to deposit money
void deposit()
{
    float amount;

    if (accountNumber == 0)
    {
        printf("No account exists! Create an account first.\n");
        return;
    }

    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    balance += amount;

    printf("Amount deposited successfully!\n");
}

// Function to withdraw money
void withdraw()
{
    float amount;

    if (accountNumber == 0)
    {
        printf("No account exists! Create an account first.\n");
        return;
    }

    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount > balance)
    {
        printf("Insufficient balance!\n");
    }
    else
    {
        balance -= amount;
        printf("Amount withdrawn successfully!\n");
    }
}

// Function to check balance
void checkBalance()
{
    if (accountNumber == 0)
    {
        printf("No account exists! Create an account first.\n");
        return;
    }

    printf("Account Number: %d\n", accountNumber);
    printf("Current Balance: %.2f\n", balance);
}
