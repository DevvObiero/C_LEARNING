#include <stdio.h>
#include <string.h>




int main(){
// switch =  a switch statement is an alternative for using many if-else statements when you need to choose between many options based on the value of a single variable. It works by evaluating the variable once and then jumping to the corresponding case label that matches the variable's value. Each case label represents a possible value of the variable, and the code associated with that case is executed. If none of the case labels match, an optional default case can be executed.




int day = 2;

switch (day)
{
case 1:
    printf(" It is Monday\n");
    break;
case 2:
    printf(" It is Tuesday\n");
    break;
case 3:
    printf(" It is Wednesday\n");
    break;
case 4: 
    printf( "it is Thursday\n");
    break;  
case 5:
    printf(" It is Friday\n");          
    break;      

    case 6:
    printf(" It is Saturday\n");
    break;
case 7:
    printf(" It is Sunday\n");  
    break;

default:
    printf(" It is not a valid day\n");
    break;
}


return 0;



}