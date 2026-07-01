#include <stdio.h>

struct Contact
{
    int id;
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact c[100];
    int n = 0;
    int choice, i, id, found;

    while (1)
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Contact ID: ");
            scanf("%d", &c[n].id);

            printf("Enter Name: ");
            scanf(" %[^\n]", c[n].name);

            printf("Enter Phone Number: ");
            scanf("%s", c[n].phone);

            printf("Enter Email: ");
            scanf("%s", c[n].email);

            n++;
            printf("Contact added successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No contacts found.\n");
            }
            else
            {
                printf("\n===== CONTACT LIST =====\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nContact ID : %d\n", c[i].id);
                    printf("Name       : %s\n", c[i].name);
                    printf("Phone      : %s\n", c[i].phone);
                    printf("Email      : %s\n", c[i].email);
                }
            }
            break;

        case 3:
            printf("Enter Contact ID to search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (c[i].id == id)
                {
                    printf("\nContact Found\n");
                    printf("Contact ID : %d\n", c[i].id);
                    printf("Name       : %s\n", c[i].name);
                    printf("Phone      : %s\n", c[i].phone);
                    printf("Email      : %s\n", c[i].email);

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Contact not found.\n");

            break;

        case 4:
            printf("Enter Contact ID to update: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (c[i].id == id)
                {
                    printf("Enter New Name: ");
                    scanf(" %[^\n]", c[i].name);

                    printf("Enter New Phone Number: ");
                    scanf("%s", c[i].phone);

                    printf("Enter New Email: ");
                    scanf("%s", c[i].email);

                    printf("Contact updated successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Contact not found.\n");

            break;

        case 5:
            printf("Enter Contact ID to delete: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (c[i].id == id)
                {
                    int j;
                    for (j = i; j < n - 1; j++)
                    {
                        c[j] = c[j + 1];
                    }

                    n--;
                    found = 1;
                    printf("Contact deleted successfully.\n");
                    break;
                }
            }

            if (!found)
                printf("Contact not found.\n");

            break;

        case 6:
            printf("Exiting Contact Management System...\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}