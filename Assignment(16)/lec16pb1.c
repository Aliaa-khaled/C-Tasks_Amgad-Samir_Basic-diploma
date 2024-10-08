#include <stdio.h>

#define SUBJECTS 5  // Number of subjects

struct Student {
    char name[50];
    int rollNumber;
    float marks[SUBJECTS];  
};

int main() {

    struct Student student;

    printf("Enter student name: ");
    scanf("%49s", student.name);  // Reading the student's name

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    for (int i = 0; i < SUBJECTS; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &student.marks[i]);
    }

    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);

    for (int i = 0; i < SUBJECTS; i++) {
        printf("Marks for subject %d: %f\n", i + 1, student.marks[i]);
    }

    return 0;
}
