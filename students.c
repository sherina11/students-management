#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n = 0, choice, i, searchId;

    while (1) {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter ID: ");
                scanf("%d", &s[n].id);
                printf("Enter Name: ");
                scanf("%s", s[n].name);
                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);
                n++;
                printf("Student Added Successfully!\n");
                break;

            case 2:
                printf("\nStudent List:\n");
                for (i = 0; i < n; i++) {
                    printf("ID: %d | Name: %s | Marks: %.2f\n",
                           s[i].id, s[i].name, s[i].marks);
                }
                break;

            case 3:
                printf("Enter ID to search: ");
                scanf("%d", &searchId);
                for (i = 0; i < n; i++) {
                    if (s[i].id == searchId) {
                        printf("Found: %s with marks %.2f\n",
                               s[i].name, s[i].marks);
                        break;
                    }
                }
                if (i == n)
                    printf("Student not found!\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}