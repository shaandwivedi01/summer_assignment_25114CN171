#include <stdio.h>

struct Book
{
    int bookId;
    char title[100];
    char author[50];
    int quantity;
};

int main()
{
    struct Book book[100];
    int n = 0;
    int choice, i, id, found;

    while (1)
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Update Book\n");
        printf("5. Delete Book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &book[n].bookId);

            printf("Enter Book Title: ");
            scanf(" %[^\n]", book[n].title);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", book[n].author);

            printf("Enter Quantity: ");
            scanf("%d", &book[n].quantity);

            n++;
            printf("Book added successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No books available.\n");
            }
            else
            {
                printf("\n===== BOOK RECORDS =====\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nBook ID   : %d\n", book[i].bookId);
                    printf("Title     : %s\n", book[i].title);
                    printf("Author    : %s\n", book[i].author);
                    printf("Quantity  : %d\n", book[i].quantity);
                }
            }
            break;

        case 3:
            printf("Enter Book ID to search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (book[i].bookId == id)
                {
                    printf("\nBook Found:\n");
                    printf("Book ID   : %d\n", book[i].bookId);
                    printf("Title     : %s\n", book[i].title);
                    printf("Author    : %s\n", book[i].author);
                    printf("Quantity  : %d\n", book[i].quantity);

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");

            break;

        case 4:
            printf("Enter Book ID to update: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (book[i].bookId == id)
                {
                    printf("Enter New Book Title: ");
                    scanf(" %[^\n]", book[i].title);

                    printf("Enter New Author Name: ");
                    scanf(" %[^\n]", book[i].author);

                    printf("Enter New Quantity: ");
                    scanf("%d", &book[i].quantity);

                    printf("Book record updated successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");

            break;

        case 5:
            printf("Enter Book ID to delete: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (book[i].bookId == id)
                {
                    int j;
                    for (j = i; j < n - 1; j++)
                    {
                        book[j] = book[j + 1];
                    }

                    n--;
                    found = 1;
                    printf("Book deleted successfully.\n");
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");

            break;

        case 6:
            printf("Exiting Library Management System...\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}