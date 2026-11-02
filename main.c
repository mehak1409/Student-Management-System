#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
    float marks;
};

struct Student s[100];
int count = 0;

void addStudent() {
    if (count >= 100) {
        printf("Student limit reached!\n");
        return;
    }

    printf("Enter Roll Number: ");
    scanf("%d", &s[count].rollno);

    printf("Enter Name: ");
    scanf(" %49[^\n]", s[count].name);

    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);

    count++;

    printf("Student added successfully!\n");
}

void displayStudents() {
    int i;

    if (count == 0) {
        printf("No student records found!\n");
        return;
    }

    printf("\n--- Student Records ---\n");

    for (i = 0; i < count; i++) {
        printf("\nRoll Number: %d\n", s[i].rollno);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }
}

void searchStudent() {
    int roll, i, found = 0;

    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);

    for (i = 0; i < count; i++) {
        if (s[i].rollno == roll) {
            printf("\nStudent Found!\n");
            printf("Roll Number: %d\n", s[i].rollno);
            printf("Name: %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Student not found!\n");
    }
}

int main() {
    int choice;

    do {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}