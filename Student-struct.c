#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student {
char name [100];
char Course[100];
int age ;
double gpa;
};
int main()
{
    struct student student1;
    student1.age= 26;
    student1.gpa= 4.76;
    strcpy(student1.name, "Mike");
    
    strcpy(student1.Course, "Computer Sc");
    printf("%s\n", student1.name);
    printf("Grade is :%f\n", student1.gpa);
    
    struct student student2;
    student2.age= 32;
    student2.gpa= 3.5;
    strcpy(student2.name, "Tobiloba");
    strcpy(student2.Course, "Medicine");
    printf("Name is:%s\n", student2.name);
    printf("Age is:%d\n", student2.age);
    printf("Course is: %s\n", student2.Course);
    printf("Grade is:%f\n", student2.gpa);
    
    struct student student3;
    student3.age= 19;
    student3.gpa= 2.5;
    strcpy(student3.name, "Isaac");
    strcpy(student3.Course, "Chemistry");
    printf("Name is:%s\n", student3.name);
    printf("Age is:%d\n", student3.age);
    printf("Course is: %s\n", student3.Course);
    printf("Grade is:%f\n", student3.gpa);
    
    struct student student4;
    student4.age= 29;
    student4.gpa= 4.2;
    strcpy(student4.name, "Emmanuel");
    strcpy(student4.Course, "Physics");
    printf("Name is:%s\n", student4.name);
    printf("Age is:%d\n", student4.age);
    printf("Course is: %s\n", student4.Course);
    printf("Grade is:%f\n", student4.gpa);
    
    struct student student5;
    student5.age= 23;
    student5.gpa= 2.7;
    strcpy(student5.name, "Dennis");
    strcpy(student5.Course, "Education");
    printf("Name is:%s\n", student5.name);
    printf("Age is:%d\n", student5.age);
    printf("Course is: %s\n", student5.Course);
    printf("Grade is:%f\n", student5.gpa);
  
    return 0;
    }
    
    