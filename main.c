#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int age;
    float gpa;
};

struct Student student1, student2, student3;

int GetIntInput();
float GetFloatInput();
void FirstStudentData(struct Student std1);
void SecondStudentData(struct Student std2);
void ThirdStudentData(struct Student std3);
void FindAvg();
void FindBestGpa();
void PrintDatas();

int main(void) {

    return 0;
}

void FirstStudentData(struct Student std1)
{
    printf("Please enter name of first student: ");
    fgets(std1.name, sizeof(std1.name), stdin);
    printf("\nPlease enter first student age: ");
    int age = GetIntInput();
    printf("\nPlease enter first student gpa: ");
    float gpa = GetFloatInput();
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