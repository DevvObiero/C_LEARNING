#include <stdio.h>
# include <stdbool.h>


int main(){

    int age = 0;
    float gpa = 0.00;
    char grade = '\0';
    char name[30] = "";

printf("Enter your age: ");
scanf("%d", &age);

printf("What is your GPA?");
scanf("%f", &gpa);

printf("What is your grade?");
scanf(" %c", &grade);

printf("Enter your full-name:");
scanf("%s", &name);

printf("%d\n", age);
printf("%f\n", gpa);
printf("%c\n", grade);
printf("%s\n", name);

    return 0; 
}


// scanf is used isnteead of printf to take input from the user.