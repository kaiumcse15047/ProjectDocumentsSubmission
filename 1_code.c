#include <stdio.h>

unsigned long amount = 1000, deposit, withdraw;
int choice, pin, k;
char transaction = 'y';

void main()
{
    //Initial Pin
    while (pin != 15047)
    {

        printf("ENTER YOUR SECRET PIN NUMBER:");

        scanf("%d", & pin);

        if (pin != 15047)

            printf("PLEASE ENTER VALID PASSWORD! \a\n");
    }

    do

    {
        //Choice to make transaction

        printf("\n********Welcome to OUR BANK ATM Service***********\n");

        printf("1. Check Balance\n");

        printf("2. Withdraw Cash\n");

        printf("3. Deposit Cash\n");

        printf("4. Quit\n");

        printf("********************************************\n\n");

        printf("Enter your choice: ");

        scanf("%d", & choice);

        switch (choice)
        {

        //Balance Check
        case 1:

            printf("\n YOUR BALANCE IS TK : %lu ", amount);

            printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");

            fflush(stdin);

            scanf("%c", & transaction);

            if (transaction == 'n' || transaction == 'N')

                k = 1;

            break;

        //Withdraw Money
        case 2:

            printf("\n ENTER THE AMOUNT TO WITHDRAW: ");

            scanf("%lu", & withdraw);

            if (withdraw % 500 != 0)

            {

                printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 500");

            }
            else if (withdraw > (amount - 500))
            {

                printf("\n INSUFFICENT BALANCE");
            }
            else

            {

                amount = amount - withdraw;

                printf("\n\n PLEASE COLLECT CASH");

                printf("\n YOUR CURRENT BALANCE IS %lu", amount);
            }

            printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");

            fflush(stdin);

            scanf("%c", & transaction);

            if (transaction == 'n' || transaction == 'N')

                k = 1;

            break;

        //Deposit
        case 3:

            printf("\n ENTER THE AMOUNT TO DEPOSIT");

            scanf("%lu", & deposit);

            amount = amount + deposit;

            printf("YOUR BALANCE IS %lu", amount);

            printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");

            fflush(stdin);

            scanf("%c", & transaction);

            if (transaction == 'n' || transaction == 'N')

                k = 1;

            break;

        //Exit
        case 4:

            k = 1;

            break;

        default:

            printf("\n INVALID CHOICE");
        }

    }
    while (!k);

    printf("\n\nTHANK YOU FOR USING ATM SERVICE\n\n\n");

    return 0;

}
