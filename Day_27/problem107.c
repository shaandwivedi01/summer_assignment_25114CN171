#include <stdio.h>

struct Salary
{
    int empId;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

int main()
{
    struct Salary emp[100];
    int n = 0;
    int choice, i, id, found;

    while (1)
    {
        printf("\n===== SALARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display All Records\n");
        printf("3. Search Record\n");
        printf("4. Update Record\n");
        printf("5. Delete Record\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &emp[n].empId);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", emp[n].name);

            printf("Enter Basic Salary: ");
            scanf("%f", &emp[n].basicSalary);

            printf("Enter HRA: ");
            scanf("%f", &emp[n].hra);

            printf("Enter DA: ");
            scanf("%f", &emp[n].da);

            emp[n].grossSalary = emp[n].basicSalary + emp[n].hra + emp[n].da;

            n++;
            printf("Salary record added successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No records found.\n");
            }
            else
            {
                printf("\nSalary Records:\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nEmployee ID : %d\n", emp[i].empId);
                    printf("Name        : %s\n", emp[i].name);
                    printf("Basic Salary: %.2f\n", emp[i].basicSalary);
                    printf("HRA         : %.2f\n", emp[i].hra);
                    printf("DA          : %.2f\n", emp[i].da);
                    printf("Gross Salary: %.2f\n", emp[i].grossSalary);
                }
            }
            break;

        case 3:
            printf("Enter Employee ID to search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (emp[i].empId == id)
                {
                    printf("\nRecord Found:\n");
                    printf("Employee ID : %d\n", emp[i].empId);
                    printf("Name        : %s\n", emp[i].name);
                    printf("Basic Salary: %.2f\n", emp[i].basicSalary);
                    printf("HRA         : %.2f\n", emp[i].hra);
                    printf("DA          : %.2f\n", emp[i].da);
                    printf("Gross Salary: %.2f\n", emp[i].grossSalary);

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Record not found.\n");

            break;

        case 4:
            printf("Enter Employee ID to update: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (emp[i].empId == id)
                {
                    printf("Enter New Basic Salary: ");
                    scanf("%f", &emp[i].basicSalary);

                    printf("Enter New HRA: ");
                    scanf("%f", &emp[i].hra);

                    printf("Enter New DA: ");
                    scanf("%f", &emp[i].da);

                    emp[i].grossSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;

                    printf("Salary record updated successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Record not found.\n");

            break;

        case 5:
            printf("Enter Employee ID to delete: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (emp[i].empId == id)
                {
                    int j;
                    for (j = i; j < n - 1; j++)
                    {
                        emp[j] = emp[j + 1];
                    }

                    n--;
                    found = 1;
                    printf("Salary record deleted successfully.\n");
                    break;
                }
            }

            if (!found)
                printf("Record not found.\n");

            break;

        case 6:
            printf("Exiting Salary Management System...\n");
            return 0;

        default:
            printf("Invalid choice.\n");
        }
    }

    return 0;
}