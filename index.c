#include <stdio.h>
#include <stdbool.h>


int main(){

float price = 1000.00;
bool isStudent = true;
bool isMember = true;

if(isStudent){
if (isMember){
    
    printf("You get a student discount of 10%\n");
    price = price * 0.9;
    printf("Your final price is: $%.2f\n", price);
    printf("You get a member discount of 5%\n");
    price = price * 0.95;
    printf("Your final price is: $%.2f\n", price);
}else{
printf("You get a student discount of 10%\n");
    price = price * 0.9;
    printf("Your final price is: $%.2f\n", price);
}
}else if(isMember){
    printf("You get a member discount of 5%\n");
    price = price * 0.95;
    printf("Your final price is: $%.2f\n", price);


}
return 0;



}