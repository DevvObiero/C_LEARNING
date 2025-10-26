#include <stdio.h>
#include <string.h>

int main() {
    
int choice  = 0 ; 
float pounds = 0.0f ;
float kilograms = 0.0f ;

printf("Select an option:\n");
printf("1. Convert Pounds to Kilograms\n");
printf("2. Convert Kilograms to Pounds\n");
printf("Enter your choice (1 or 2): ");
scanf("%d", &choice);
if (choice == 1) {
    printf("Enter weight in Pounds: ");
    scanf("%f", &pounds);
    kilograms = pounds * 0.45359237f;
    printf("%.2f Pounds is equal to %.2f Kilograms\n", pounds, kilograms);
} else if (choice == 2) {
    printf("Enter weight in Kilograms: ");
    scanf("%f", &kilograms);
    pounds = kilograms / 0.45359237f;
    printf("%.2f Kilograms is equal to %.2f Pounds\n", kilograms, pounds);
} else {
    printf("Invalid choice. Please select 1 or 2.\n");
}



return 0;
}