#include <stdio.h>
#include <stdbool.h>
#include <string.h>

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

getchar();
printf("Enter your full-name:");
fgets(name, sizeof(name), stdin);
name[strlen(name) - 1] = '\0';

printf("%d\n", age);
printf("%f\n", gpa);
printf("%c\n", grade);
printf("%s\n", name);

    return 0; 
}


// scanf is used isnteead of printf to take input from the user.