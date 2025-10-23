#include <stdio.h>

int main() {
    int purchaseAmount, age;
    char gender;

    printf("Enter total purchase amount (integer): ");
    scanf("%d", &purchaseAmount);

    printf("Enter age of the shopper (integer): ");
    scanf("%d", &age);

    printf("Enter gender (M for Male, F for Female): ");
    scanf(" %c", &gender); 

    // --- Core Logic ---

    // Criteria 1: Gender Neutral
    int criteria1 = (purchaseAmount >= 10000);

    // Criteria 2: Gender Neutral
    int criteria2 = ((age >= 70) && (purchaseAmount >= 5000));

    // Criteria 3: Gender Specific (Female only)
    // If gender is 'M' or 'm', the first part (gender == 'F' || gender == 'f') is FALSE (0).
    // The entire criteria3 expression will then be FALSE (0).
    int criteria3 = ((gender == 'F' || gender == 'f') && (age >= 50));
    
    // The final result includes the male logic:
    // If the shopper is Male, criteria3 will be 0, so the discount relies on C1 or C2.
    int discountGranted = criteria1 || criteria2 || criteria3;

    // --- Output ---
    printf("Result: %s\n", 
           discountGranted ? "Discount Granted" : "Discount Denied");

    return 0;
}