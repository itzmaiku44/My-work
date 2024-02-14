#include<stdio.h>

int main(){

    int lab1 = 0, lab2 = 0, lab3 = 0;
    int mid = 0, final = 0;
    int totalle = 0;
    float percentle = 0, percentmid = 0, percentfinal = 0;
    int grade = 0;

    printf("Laboratory Exercise #1: ");
    scanf("%d", &lab1);
    printf("Laboratory Exercise #2: ");
    scanf("%d", &lab2);
    printf("Laboratory Exercise #3: ");
    scanf("%d", &lab3);
    printf("Midterm Exam: ");
    scanf("%d", &mid);
    printf("Final Exam: ");
    scanf("%d", &final);

    printf("\nCourse: \tProgramming 1");
    printf("\nExercises: ");
    printf("%10s %10d/50", "\n\tLab Exercise 1: ", lab1);
    printf("%10s %10d/50%", "\n\tLab Exercise 2: ", lab2);
    printf("%10s %10d/50%", "\n\tLab Exercise 3: ", lab3);
    printf("\nExams:");
    printf("%-2s %10d/100", "\n\tMidterm Exam:  ", mid);
    printf("%-4s %10d/100", "\n\tFinal Exam:    ", final);

    totalle = lab1 + lab2 + lab3;
    percentle = (float)totalle / 150 * 30.0;
    percentmid = (float)mid / 100 * 30.0;
    percentfinal = (float)final / 100 * 40.0;
    grade = percentle + percentmid + percentfinal;

    printf("\n");
    printf("%s %20d%%", "\nFinal Grade: ", grade);
    if(grade>=75){
        printf("\nStatus: \t\t\tPassed");
    }
    else{

        printf("\nStatus: \t\t\tFailed");
    }








    return 0;
}