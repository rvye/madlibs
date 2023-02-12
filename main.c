#include <stdio.h>


int main(void) { 
  // variables 
  char food[80]; 
  char name[80]; 
  char adjective[80]; 
  int play;  
  
  // stdin & stdout  
  printf("--------\nMADLIBS!\n--------\n");  
  printf("Enter a Number to continue.\n\n"); 
  printf("\n[1] Play\n"); printf("[2] Quit\n\n");  
  
  scanf("%i", &play);  
  if (play == 1) { 
    printf("\nName a food: ");
    scanf("%s", food);

    printf("\nGive me a name: ");
    scanf("%s", name);
    
    printf("\nName an adjective: ");
    scanf("%s", adjective);

    printf("\n\nHere's your MADLIB!\n");

    // cited from https://kidscodecs.com/python-mad-libs/#:~:text=AN%20EXAMPLE%20MADLIB&text=It%20was%20pizza%20day%20at,and%20ran%20through%20the%20playground
    printf("It was %s day at school, and %s was super %s for lunch.", food, name, adjective);

  } 
  if (play == 2) { 
    printf("\nGoodbye!");
  } 
  else { 
    printf("\nPlease enter a number, quitting.\n");
  }
}
