#include <stdio.h>  

// Define the maximum number of students
#define MAX_STUDENTS 3  

// Define a structure to hold student data
struct student {  
    int roll_no;           // Student's roll number
    char name[50];         // Student's name
    float marks;           // Student's marks
};

int main() {  
    struct student students[MAX_STUDENTS];  // Array to store student records
    int choice, count = 0;  // choice: for menu, count: current number of students  

    while (1) {  // Infinite loop until user exits
        // Display menu
        printf("\nChoose an option:\n");  
        printf("1. Add Student\n");  
        printf("2. Display All Students\n");  
        printf("3. Exit\n");  
        printf("Enter your choice: ");  
        scanf("%d", &choice);  

        // Option 1: Add a student
        if (choice == 1) {  
            if (count < MAX_STUDENTS) {  // Check if there's space
                printf("\nEnter details for student %d:\n", count + 1);  
                printf("Roll No: ");  
                scanf("%d", &students[count].roll_no);  

                printf("Name: ");  
                scanf(" %[^\n]%*c", students[count].name);  // Input name with spaces

                printf("Marks: ");  
                scanf("%f", &students[count].marks);  

                count++;  // Increase student count
            } else {  
                printf("Maximum number of students reached.\n");  
            }  
        }

        // Option 2: Display all students
        else if (choice == 2) {  
            if (count == 0) {
                printf("No student records to show.\n");
            } else {
                printf("\n--- All Student Records ---\n");
                for (int i = 0; i < count; i++) {
                    printf("Student %d:\n", i + 1);
                    printf("Roll No: %d\n", students[i].roll_no);
                    printf("Name: %s\n", students[i].name);
                    printf("Marks: %.2f\n", students[i].marks);
                    printf("------------------------\n");
                }
            }
        }

        // Option 3: Exit
        else if (choice == 3) {  
            printf("Exiting the program. Goodbye!\n");  
            break;  // Exit the loop
        }  
        else {  
            printf("Invalid choice! Please select again.\n");  
        }  
    }  

    return 0;  
}

