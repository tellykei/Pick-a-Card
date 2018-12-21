/*
*==============================================================================
*Program 1														pick a card.c
* Author      : Taliyah Rivera
* Version     : Created September 11, 2017
* Copyright   : Your copyright notice.
* Description : This program is a random card generator. First you pick your
* suit and then you pick your card. Written in C, ANSI-style.
*==============================================================================
 */
#include <string.h>	//string library
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h> //math library used for rand function

int main(void) {//the whole program is one function and I declared my variables
				//and char strings and also added for loops and ended it with
				//return 0


 srand(time(NULL)); //makes sure that the random number changes
   char *cardsarr[13] = {'A','2','3','4','5','6','7','8','9','10','J','Q','K'};
   char *suitsarr[4] = {'Hearts', 'Diamonds', 'Clubs', 'Spades'};
   char rands = rand() %4 +1; 		//chooses a random suit from the string;
   char randc = rand() %13 +1; 	//chooses a random card from the string;
   int x;
   int i;
   int value;			//used for inputs and outputs


    for(x= 0; x < 4; x++) //loop for random suits
		 {
		 printf("Welcome to the menu: Pick a Suit\n"); //menu
		 printf("1 for hearts\n2 for diamonds\n3 for clubs\n4 for spades\n");
		 printf("to exit enter 0\n");
		// printf("%d\t", rands); //shows the correct random suit
		 fflush(stdout);
		 scanf("%i", &value);


		if(value == 0){
		printf("Bye, Play again!"); return 0;}

		if (value > 5){
			printf("Sorry,that value was invalid."); //error message
			return 0; }

		if (value == rands) {
			printf("You picked the right suit!\n");
			printf("You picked %i\n", value);
			break ;} //stops the loop and skips to the next one
					 // I didn't know how to make it say the string name

		  if (value != rands)
		    {
		    printf("You picked the wrong suit. Please play again.\n");
		    return 0;		//incorrect answer ends the program
		   	  }


		 }


    for (i =0; i < 13; i++) //loop for secret card
		 {
	  printf("Pick a Card\n");
	  //printf("%d", randc); //shows random card
	  fflush(stdout);
	  scanf("%i", &value);

	 if (value == randc) {
		 printf("You picked the right card!Thanks for playing!");
	 	 return 0;} //ends program

	 if (value != randc){
		 printf("You picked the wrong card. Thanks for playing!");
	 	 return 0;}

 	 if(value > 13){
 		 printf("Sorry that value was invalid"); 	//error message
 		 return 0; }
		 }

return 0;
}

/*
 TESTS

Welcome to the menu: Pick a Suit
1 for hearts
2 for diamonds
3 for clubs
4 for spades
to exit enter 0
4	0
Bye, Play again!


Welcome to the menu: Pick a Suit
1 for hearts
2 for diamonds
3 for clubs
4 for spades
to exit enter 0
3	1
You picked the wrong suit. Please play again.


Welcome to the menu: Pick a Suit
1 for hearts
2 for diamonds
3 for clubs
4 for spades
to exit enter 0
2	8
Sorry,that value was invalid.


Welcome to the menu: Pick a Suit
1 for hearts
2 for diamonds
3 for clubs
4 for spades
to exit enter 0
4	4
You picked the right suit!
You picked 4
Pick a Card
8      7
You picked the wrong card. Thanks for playing!


Welcome to the menu: Pick a Suit
1 for hearts
2 for diamonds
3 for clubs
4 for spades
to exit enter 0
1	1
You picked the right suit!
You picked 1
Pick a Card
2     2
You picked the right card!Thanks for playing!

*/
