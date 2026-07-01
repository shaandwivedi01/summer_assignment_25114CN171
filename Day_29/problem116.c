#include <stdio.h>

int main()
{
    int qty = 0, ch, add, sell;

    do
    {
        printf("\n===== Inventory Management =====\n");
        printf("1. Add Stock\n");
        printf("2. Sell Stock\n");
        printf("3. View Stock\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter quantity to add: ");
            scanf("%d", &add);
            qty += add;
            printf("Stock added successfully.\n");
            break;

        case 2:
            printf("Enter quantity to sell: ");
            scanf("%d", &sell);

            if (sell <= qty)
            {
                qty -= sell;
                printf("Stock sold successfully.\n");
            }
            else
            {
                printf("Insufficient stock!\n");
            }
            break;

        case 3:
            printf("Current Stock = %d\n", qty);
            break;

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (ch != 4);

    return 0;
}