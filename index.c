#include <stdio.h>

int main(){


int age = 0;
printf("Enter your age: ");
scanf("%d", &age);


if(age >= 18 ){
    printf("you are an adult");
}else if(age == 0){
    printf("You are not born yet");
}else{
  printf("You are a child");
}




  return 0;
}