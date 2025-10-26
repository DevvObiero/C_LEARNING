#include <stdio.h>


int main() {
    int age;
printf("Enter your age: ");
scanf("%d", &age);

    if (age > 21)
    {
        printf("You are eligible to vote  nad drink alcohol.\n");
    }else
    {
        printf("You are not eligible to vote and drink alcohol.\n");
    }



return 0;
}