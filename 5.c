//struct to store student information id,name,marks[3]
#include<stdio.h>
struct Student {
    int id;
    char *name;
    float *marks;
}; 
int main() {
    struct Student student1;

    student1.id=1234;
    student1.name="harsh";
    student1.marks="21";

    printf("Student ID: %d\n", student1.id);
    printf("Student Name: %s\n", student1.name);
    printf("Marks: %s\n", student1.marks);

    return 0;
}