#include <stdio.h>
#include <math.h>


int main() {
double  principle = 0.0;
double rate = 0.0 ;
int years = 0 ;
int timesCompounded = 0 ;
double  totalAmount = 0.0;

printf("Enter the principle amount: ");
scanf("$lf",&principle);

printf("Enter the rate of interest: ");
scanf("lf,",&rate);
rate = rate / 100;

printf("Enter the number of years: ");
scanf("%d",&years);
printf("Enter the number of times the interest is compounded per year: ");
scanf("%d",&timesCompounded);
totalAmount = principle * pow((1 + rate / timesCompounded), timesCompounded * years);
printf("The total amount after %d years is: $%.2lf\n", years, totalAmount);



return 0;
}