//#include <iostream>
#include "Player.h"
//#include <stdlib.h> for system()
//#include "windows.h"
//#include <ctime>

// loses 1 xp after answer is wrong
// gains 1 xp if answers 5 questions right in a row (if streak = 5)
// when streak is equal to 5, increment xp and set streak back to 0
// 30 seconds to answer the question
// max of 30 points per question, depending on the time it takes to answer the question
// for every second spent, points for the question decreases by 1

// do while loop for main function
// break the loop when user says he doesnt want to keep playing
// after a question is answered, update xp and score
// if after decrementing xp, the xp is 0, display game over and ask if the user wants to start a new game
// after the last question, display a congratulations message and ask if the user wants to play again
// display score and xp before every question

// From Game.cpp
void play_game(Player player);
bool ask_to_play();


int main() {
	bool play_again {true};
	do
	{
		Player player(3, 0, 0);
		play_game(player);
		play_again = ask_to_play();
	} while (play_again == true);
	return 0;
}