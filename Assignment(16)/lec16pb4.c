#include <stdio.h>

#define NUM_STUDENTS 10  // Define the number of students

// Define a structure to hold student information
struct Student {
    char name[50];
    int id;
    float grade;
};

// Function to input student data using pointers
void inputStudentData(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", (students + i)->name);  // Using pointer arithmetic to access name
        printf("ID: ");
        scanf("%d", &(students + i)->id);   // Using pointer arithmetic to access id
        printf("Grade: ");
        scanf("%f", &(students + i)->grade);  // Using pointer arithmetic to access grade
    }
}

// Function to print student data using pointers
void printStudentData(struct Student* students, int size) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", (students + i)->name);  // Using pointer arithmetic to access name
        printf("ID: %d\n", (students + i)->id);      // Using pointer arithmetic to access id
        printf("Grade: %f\n", (students + i)->grade);  // Using pointer arithmetic to access grade
    }
}

int main() {
    struct Student students[NUM_STUDENTS];  // Array to store data for 10 students

    // Input student data
    inputStudentData(students, NUM_STUDENTS);

    // Print student data
    printStudentData(students, NUM_STUDENTS);

    return 0;
}
