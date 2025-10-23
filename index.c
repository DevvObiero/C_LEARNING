#include <stdio.h>

int main() {
int a,b;
    char z;
    // a = total purchase
    // b = age
    // z = gender

    printf("Enter purchase amount:");
    scanf("%d", &a);
    printf("Enter your age:");
    scanf("%d", &b);
    printf("Enter your gender, M or F:");
    scanf(" %c",&z);

    int criteria1 = (a >= 10000);
    int criteria2 = ((b >= 70) && (a >= 5000));
    int criteria3 = ((z == 'F' || z == 'f') && (b >= 50));
    int e = criteria1 || criteria2 || criteria3;
    // d = discount granted
    
    printf("Result %s\n",
        e ? "Discount Granted" : "Discount Denied");
    
    return 0;
}