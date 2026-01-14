#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	char userName[20];
	printf("Hello! What's your name?  ");
	scanf("%s", userName);
	printf("Welcome, %s! Let's play a game :)  \n", userName);


	srand(time(NULL));
	int correct = rand();
	correct = (correct % 100) + 1;

	int turns = 0;
	int keepGoing = -1;
	int guess = -999;

	while(keepGoing){
		printf("Guess a number between 1 and 100:  ");
		scanf("%d", &guess);
		
		if(guess < correct){
			printf("Too low... ");
			turns = turns + 1;
		} // end if
		if(guess > correct){
			printf("Too high... ");
			turns = turns + 1;
		} // end if
		if(guess == correct){
			printf("You guessed correctly!  \n");
			keepGoing = 0;
		} // end if
	} // end while
	
	printf("\nYou guessed %d times. ", turns);
	
	if(turns < 7){
		printf("Great job!  \n");
	} // end if
	if(turns > 7){
		printf("Poor performance. Try harder next time.  \n");
	} // end if
	if(turns == 7){
		printf("Average job.  \n");
	} // end if
	
	printf("\nGoodbye, %s. Play again sometime!   \n", userName);

} // end main
