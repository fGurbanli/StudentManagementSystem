#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int age;
    float gpa;
};


int GetIntInput();
float GetFloatInput();
void GetStudentData(struct Student* student);
void PrintStudents(struct Student students[], int count);
float CalculateAverage(struct Student students[], int count);
int FindBestStudent(struct Student students[], int count);

int main(void) {

    printf("Please enter student count: ");
    int count = GetIntInput();
    struct Student students[count];
    for (int i = 0; i < count; i++)
    {
        GetStudentData(&students[i]);
    }

    return 0;
}

void GetStudentData(struct Student* student)
{
    while (getchar() != '\n');
    printf("\nPlease enter student name: ");
    fgets(student->name, sizeof(student->name), stdin);

    printf("\nPlease enter student age: ");
    student->age = GetIntInput();

    printf("\nPlease enter student gpa: ");
    student->gpa = GetFloatInput();
}
float CalculateAverage(struct Student student[], int count) {
    float avg;
    float sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += student[i].gpa;
    }
    avg = sum / count;
    return avg;
}
int FindBestStudent(struct Student students[], int count)
{
    int bestIndex = 0;
    for (int i = 1; i < count; i++)
    {
        if (students[bestIndex].gpa < students[i].gpa)
        {
            bestIndex = i;
        }
    }
    return bestIndex;
}
void PrintStudents(struct Student students[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("\n====STUDENT %d====", i + 1);
        printf("\nStudent name: %s", students[i].name);
        printf("\nStudent age: %d", students[i].age);
        printf("\nStudent gpa: %.2f", students[i].gpa);
    }
    printf("\nClass's average gpa is: %.2f", CalculateAverage(students, count));
    printf("\n Best student is %s", students[FindBestStudent(students,count)].name);
}

int GetIntInput()
{
    int input;
    while (1)
    {
        if (scanf("%d", &input) == 1 && input > 0)
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
        if (scanf("%f", &input) == 1 && input > 0)
        {
            break;
        }
        printf("\nEnter a valid value!");
        while (getchar() != '\n');
    }
    return input;
}