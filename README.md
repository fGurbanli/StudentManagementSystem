# Student Management System

A simple Student Management System written in C to practice structs, arrays, pointers, functions, string handling, and input validation.

## Features

* Add multiple students
* Store student information using structs
* Input validation for age and GPA
* Display all student information
* Calculate class average GPA
* Find the student with the highest GPA

## Concepts Practiced

This project was built to strengthen understanding of:

* Structs
* Struct Arrays
* Pointers
* Passing Structs to Functions
* The `->` Operator
* String Handling with `fgets()`
* Input Validation
* Loops
* Functions
* Array Traversal

## Student Structure

```c
struct Student {
    char name[20];
    int age;
    float gpa;
};
```

Each student contains:

* Name
* Age
* GPA

## Example Output

```text
Please enter student count: 3

Please enter student name: John
Please enter student age: 20
Please enter student gpa: 3.5

Please enter student name: Emma
Please enter student age: 21
Please enter student gpa: 4.0

Please enter student name: Alex
Please enter student age: 19
Please enter student gpa: 3.2

==== STUDENT 1 ====
Student name: John
Student age: 20
Student gpa: 3.50

==== STUDENT 2 ====
Student name: Emma
Student age: 21
Student gpa: 4.00

==== STUDENT 3 ====
Student name: Alex
Student age: 19
Student gpa: 3.20

Class's average gpa is: 3.57
Best student is Emma
```

## Future Improvements

* Find oldest student
* Find youngest student
* Sort students by GPA
* Search student by name
* Dynamic memory allocation using `malloc()`
* Save and load students from files
* Menu-based interface

## Author

Furkan Gurbanli

GitHub: https://github.com/fGurbanli
