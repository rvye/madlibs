#include <stdio.h>


int main(void) { 
  // variables 
  char food[80]; 
  char name[80]; 
  char adjective[80]; 
  int play;  
  
  // Menu, choose between play, or quit
  printf("--------\nMADLIBS!\n--------\n");  
  printf("Enter a Number to continue.\n\n"); 
  printf("\n[1] Play\n"); printf("[2] Quit\n\n");  
  
  scanf("%i", &play);  
  
  // If the user chooses play (1)
  if (play == 1) { 
    
    // Asking for variables, for the madlib
    printf("\nName a food: ");
    scanf("%s", food);
    printf("\nGive me a name: ");
    scanf("%s", name);
    printf("\nName an adjective: ");
    scanf("%s", adjective);
    
    // Prints madlib to stdout
    printf("\n\nHere's your MADLIB!\n");
    printf("It was %s day at school, and %s was super %s for lunch.", food, name, adjective);

  } 
  // if the user chooses, quit (2)
  if (play == 2) { 
    printf("\nGoodbye!");
  } 
  
  // error catching
  else { 
    printf("\nPlease enter a number, quitting.\n");
  }
}
