#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("===== QUIZ APPLICATION =====\n\n");

    printf("Q1. Who is known as the Father of C?\n");
    printf("1. Dennis Ritchie\n");
    printf("2. James Gosling\n");
    printf("3. Bjarne Stroustrup\n");
    printf("4. Guido van Rossum\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is Dennis Ritchie.\n\n");
    }
    printf("Q2. Which symbol is used to end a statement in C?\n");
    printf("1. .\n");
    printf("2. ;\n");
    printf("3. :\n");
    printf("4. ,\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is ;\n\n");
    }
    printf("Q3. Which loop executes at least once?\n");
    printf("1. for\n");
    printf("2. while\n");
    printf("3. do-while\n");
    printf("4. None\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is do-while.\n\n");
    }

    printf("Q4. Which header file is required for printf()?\n");
    printf("1. string.h\n");
    printf("2. math.h\n");
    printf("3. stdio.h\n");
    printf("4. stdlib.h\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is stdio.h.\n\n");
    }
    printf("Q5. Which operator is used for comparison?\n");
    printf("1. =\n");
    printf("2. ==\n");
    printf("3. +=\n");
    printf("4. !=\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is ==.\n\n");
    }

    printf("===== QUIZ COMPLETED =====\n");
    printf("Your Score: %d/5\n", score);

    if (score == 5)
        printf("Excellent! Perfect Score!\n");
    else if (score >= 4)
        printf("Very Good!\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}