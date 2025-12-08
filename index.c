#include <stdio.h>
#include <string.h>




int main(){
 int choice  = 0 ;
 float pounds = 0.0f ;
 float kilograms = 0.0f ;

 printf("Weight Conversion Calculator");
 printf("\n1. Pounds to Kilograms");
 printf("\n2. Kilograms to Pounds");
    printf("\nEnter your choice (1 or 2): ");


    scanf("\n%d", &choice);

    if (choice == 1) {
        printf("Enter weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds * 0.45359237f;
        printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);
    } else if (choice == 2) {
        printf("Enter weight in kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms / 0.45359237f;
        printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
    } else {
        printf("Invalid choice. Please select 1 or 2.\n");
    }

return 0;



}