#include <stdio.h>
#include <malloc.h>
struct student{
    char Name[30];
    int Rollno;
    int Age;
    int Grade;
};
int main()
{
    int totStudent, i;
    struct student *students;
    printf("Enter number of students: ");
    scanf("%d", &totStudent);
    students = (struct student *)malloc(sizeof(struct student) * totStudent);
    for(i=0;i<totStudent;i++){
        printf("Enter name of student-%d: ", i + 1);
        scanf("%s", (students + i)->Name);
        printf("Enter rollno of student-%d: ", i + 1);
        scanf("%d", &(students + i)->Rollno);
        printf("Enter age of student-%d: ", i + 1);
        scanf("%d", &(students + i)->Age);
        printf("Enter grade of student-%d: ", i + 1);
        scanf("%d", &(students + i)->Grade);
    }
    for(i=0;i<totStudent;i++)
    {
        printf("Student %d details:\n", i + 1);
        printf("Name: %s\n", (students + i)->Name);
        printf("Rollno: %d\n", (students + i)->Rollno);
        printf("Age: %d\n", (students + i)->Age);
        printf("Grade: %d\n", (students + i)->Grade);
    }
    return 0;
}