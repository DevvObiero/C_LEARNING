#include <stdio.h>

int main(){

// #MAD LIBS GAME

char noun[50] = "";
char verb[50] = "";
char adjective1[50] = "";
char adjective2[50] = "";
char adjective3[50]="";

printf("Enter a noun: ");   
fgets(noun, sizeof(noun), stdin);


printf("Enter a verb: ");
fgets(verb, sizeof(verb), stdin);

printf("Enter an adjective: ");
fgets(adjective1, sizeof(adjective1), stdin);

printf("Enter another adjective: ");
fgets(adjective2, sizeof(adjective2), stdin);

printf("Enter one more adjective: ");
fgets(adjective3, sizeof(adjective3), stdin);

printf("Here is your story:\n");


printf("Once upon a time, there was a %s %s who loved to %s. Every day, the %s %s would embark on %s adventures.\n", adjective1, noun, verb, adjective2, noun, adjective3);


return 0; 
}

