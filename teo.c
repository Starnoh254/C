#include <stdio.h>

struct Student {
    char name[50];
    int ID;
    float GPA;
};

void sort(struct Student array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i].GPA < array[j].GPA) {
                // Swap entire Student structures
                struct Student temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
}

int main() {
    struct Student student1 = {"John", 101, 4.5};
    struct Student student2 = {"Alice", 102, 3.5};
    struct Student student3 = {"Kamau", 103, 13.5};
    struct Student students[3] = {student1, student2 , student3};
    int size = sizeof(students) / sizeof(students[0]);

    sort(students, size);

    // Print the sorted list
    printf("Sorted list of students by GPA:\n");
    for (int i = 0; i < size; i++) {
        printf("Name: %s, ID: %d, GPA: %.2f\n", students[i].name, students[i].ID, students[i].GPA);
    }

    return 0;
}
