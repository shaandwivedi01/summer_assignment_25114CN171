#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;
};

int main()
{
    struct Student s[100];
    int n = 0;
    int choice, i, roll, found;

    while (1)
    {
        printf("\n===== MARKSHEET GENERATION SYSTEM =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Marksheets\n");
        printf("3. Search Student\n");
        printf("4. Update Student Marks\n");
        printf("5. Delete Student Record\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Roll Number: ");
            scanf("%d", &s[n].roll);

            printf("Enter Name: ");
            scanf(" %[^\n]", s[n].name);

            printf("Enter Marks of 5 Subjects:\n");
            scanf("%f %f %f %f %f",
                  &s[n].m1, &s[n].m2, &s[n].m3,
                  &s[n].m4, &s[n].m5);

            s[n].total = s[n].m1 + s[n].m2 + s[n].m3 + s[n].m4 + s[n].m5;
            s[n].percentage = s[n].total / 5;

            if (s[n].percentage >= 90)
                s[n].grade = 'A';
            else if (s[n].percentage >= 75)
                s[n].grade = 'B';
            else if (s[n].percentage >= 60)
                s[n].grade = 'C';
            else if (s[n].percentage >= 40)
                s[n].grade = 'D';
            else
                s[n].grade = 'F';

            n++;
            printf("Marksheet generated successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No records found.\n");
            }
            else
            {
                for (i = 0; i < n; i++)
                {
                    printf("\n==============================\n");
                    printf("Roll No    : %d\n", s[i].roll);
                    printf("Name       : %s\n", s[i].name);
                    printf("Subject 1  : %.2f\n", s[i].m1);
                    printf("Subject 2  : %.2f\n", s[i].m2);
                    printf("Subject 3  : %.2f\n", s[i].m3);
                    printf("Subject 4  : %.2f\n", s[i].m4);
                    printf("Subject 5  : %.2f\n", s[i].m5);
                    printf("Total      : %.2f\n", s[i].total);
                    printf("Percentage : %.2f%%\n", s[i].percentage);
                    printf("Grade      : %c\n", s[i].grade);
                }
            }
            break;

        case 3:
            printf("Enter Roll Number to search: ");
            scanf("%d", &roll);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    printf("\nRecord Found\n");
                    printf("Roll No    : %d\n", s[i].roll);
                    printf("Name       : %s\n", s[i].name);
                    printf("Total      : %.2f\n", s[i].total);
                    printf("Percentage : %.2f%%\n", s[i].percentage);
                    printf("Grade      : %c\n", s[i].grade);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student not found.\n");

            break;

        case 4:
            printf("Enter Roll Number to update: ");
            scanf("%d", &roll);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    printf("Enter New Marks of 5 Subjects:\n");
                    scanf("%f %f %f %f %f",
                          &s[i].m1, &s[i].m2, &s[i].m3,
                          &s[i].m4, &s[i].m5);

                    s[i].total = s[i].m1 + s[i].m2 + s[i].m3 + s[i].m4 + s[i].m5;
                    s[i].percentage = s[i].total / 5;

                    if (s[i].percentage >= 90)
                        s[i].grade = 'A';
                    else if (s[i].percentage >= 75)
                        s[i].grade = 'B';
                    else if (s[i].percentage >= 60)
                        s[i].grade = 'C';
                    else if (s[i].percentage >= 40)
                        s[i].grade = 'D';
                    else
                        s[i].grade = 'F';

                    printf("Record updated successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student not found.\n");

            break;

        case 5:
            printf("Enter Roll Number to delete: ");
            scanf("%d", &roll);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    int j;
                    for (j = i; j < n - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }

                    n--;
                    found = 1;
                    printf("Record deleted successfully.\n");
                    break;
                }
            }

            if (!found)
                printf("Student not found.\n");

            break;

        case 6:
            printf("Exiting Program...\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}