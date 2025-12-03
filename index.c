#include <stdio.h>
#include <string.h>




int main(){


char name[50]="";
printf("Enter your name: ");
fgets(name, sizeof(name), stdin);
name[strcspn(name, "\n")] = 0;  // Remove newline character if present


if(strlen(name) == 0){
    printf("No name entered.\n");
} else {
    printf("Hello, %s!\n", name);
}

return 0;



}