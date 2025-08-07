#include <stdio.h>

struct Student {
    int id;
    float marks;
};

void displayStudents(struct Student *s, int n);
float averageMarks(struct Student *s, int n);

int main() {
  
    struct Student students[] = {
        {101, 85.5},
        {102, 90.0},
        {103, 78.25}
    };
    int n = sizeof(students) / sizeof(students[0]);

    printf("Student Details:\n");
    displayStudents(students, n);

    float avg = averageMarks(students, n);
    printf("Average marks: %.2f\n", avg);

    return 0;
}

void displayStudents(struct Student *s, int n) {
    for (int i = 0; i < n; i++) {
        printf("Student %d - ID: %d, Marks: %.2f\n", i + 1, (s + i)->id, (s + i)->marks);
    }
}

float averageMarks(struct Student *s, int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (s + i)->marks;
    }
    return sum / n;
}

