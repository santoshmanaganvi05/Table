#include <stdio.h>

void displayGrade(int marks) {
    if (marks >= 91 && marks <= 100) {
        printf("AA\n");
    } else if (marks >= 81 && marks <= 90) {
        printf("AB\n");
    } else if (marks >= 71 && marks <= 80) {
        printf("BB\n");
    } else if (marks >= 61 && marks <= 70) {
        printf("BC\n");
    } else if (marks >= 51 && marks <= 60) {
        printf("CD\n");
    } else if (marks >= 41 && marks <= 50) {
        printf("DD\n");
    } else {
        printf("Fail\n");
    }
}

int main() {
    int marks;

    printf("Enter your marks (out of 100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks entry. Please enter a value between 0 and 100.\n");
    } else {
        printf("Marks\tGrade\n");
        displayGrade(marks);
    }

    return 0;
}