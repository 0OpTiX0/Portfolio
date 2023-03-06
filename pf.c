#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 

 // This program is to generate a random number to which the // User needs to guess correctly. The program will repeat
 // unitll the user guesses correctly.
// Pt.2 the program will count how many times the user gets an answer incorrect.






int main(){

	srand(time(0));

			int cm = (rand() % 10) + 1 ;
			int gm;
			int aw; 
			aw = 0;
			
			printf("\n\n Welcome to the number guessing game!\n");
         printf("\n Your machine will generate a random number (0-10) for you to guess.\n");
         printf("\n Good Luck!\n\n");
			printf("%i", cm);
			while (cm > gm || cm < gm){
					  printf("\n Guess the random number: \n");
					  scanf("%i", &gm);
					  if (cm > gm){
								 printf("\n Your answer was too low. Aim higer!\n");
								 aw =  aw + 1;
								 }
					  else if (cm < gm){
								 printf("\n Your answer was too high. Dont get to ambitious...\n");
								 aw = aw + 1;
								 } // Fix this code beow, it wont stop looping...
					  else if (gm == `r){
							  printf("\n Please enter a correct digit.\n");
							  }
			  
					  if (cm ==  gm){
								 printf("\n Correct! You guessed the correct number!\n");
								 printf("\n You guessed %i times\n", aw);
								 break;

					          }
					  }





		return 0;
 }
					  


