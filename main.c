#include <stdio.h>
#include <string.h>

int GetIntInput();
float GetFloatInput();

int main(void) {
    struct Student {
        char name[20];
        int age;
        float gpa;
    };

    printf("Please enter student count in a class: ");
    int count = GetIntInput();
    struct Student student[count];

    for (int i = 0; i < count; i++)
    {
        printf("Name of the %dth student", i);

    }
}

int GetIntInput()
{
    int input;
    while (1)
    {
        if (scanf("%d", &input) == 1)
        {
            break;
        }
        printf("\nEnter a valid value!");
        while (getchar() != '\n');
    }
    return input;
}

float GetFloatInput()
{
    float input;
    while (1)
    {
        if (scanf("%f", &input) == 1)
        {
            break;
        }
        printf("\nEnter a valid value!");
        while (getchar() != '\n');
    }
    return input;
}