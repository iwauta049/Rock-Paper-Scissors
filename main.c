
// RockPaperScissors
// March 7, 2024


// include stdio.h stdlib.h and time.h 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

// declare your get_user_choice function
/**
 * 1 for rock, 2 for paper, 3 for scissors
 **/
int get_user_choice(){
    int userChoice;
    char input;
    bool valid = false;
	while(!valid){ // loop unless user input is invalid
        printf("Enter: \tr-rock/p-paper/s-scissors\n");
        scanf("%s", &input);
	    // Print user's choice
	    printf("Your choice: ");
	    switch (input){
	        case 'r':
	        case 'R':
	           printf("ROCK\n");
	           valid = true;
	           userChoice = 1;
	           break;
	        case 'p':
	        case 'P':
	           printf("PAPER\n");
	           valid = true;
	           userChoice = 2;
	           break;
	        case 's':
	        case 'S':
	           printf("SCISSORS\n");
	           valid = true;
	           userChoice = 3;
	           break;
	        default:
	            printf("Error, input invalid!\n");
	            break;
	    }
	}
    return userChoice;
}

int main()
{
	// use your get_user_choice function to get the user's move
    int userChoice = get_user_choice();

	// generate the computers move using the rand function
	srand(time(NULL));
	int r = rand() %3 + 1;
	// print out what the computer's move was using if/elses
	printf("Computer choice: ");
	switch(r){
	   case 1:
	        printf("ROCK\n");
	        break;
	   case 2:
	        printf("PAPER\n");
	        break;
	   case 3:
	        printf("SCISSORS\n");
	        break;
	}
	// using if/elses compare the user and computer moves to see who won
	if(userChoice==r){
	    printf("TIE!");
	}
	else if((userChoice==1 && r ==2)||(userChoice==2 && r ==3)||(userChoice==3 && r ==1)){ 
	    printf("YOU LOST!");
	}
	else {
	    printf("YOU WON!");
	}


}


