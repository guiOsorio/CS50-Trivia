#include <iostream>
#include "Player.h"

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

// Checks for actions to do after the user answers a question
int after_answer(Player player, char answer, char correct_answer);

bool play_game(Player player);

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



int after_answer(Player player, char answer, char correct_answer) {
	if(answer == correct_answer) {
		player.increment_streak();
		player.increment_score();
	} else {
		player.reset_streak();
		player.decrement_xp();
	}
	
	if(player.get_streak() == 5) {
		player.increment_xp();
		player.reset_streak();
	}
	
	if(player.get_xp() == 2) {
		std::cout << "GAME OVER" << std::endl;
		return 0;
	} else {
		std::cout << "CONGRATS" << std::endl;
		return 1;
	}
}

bool play_game(Player player) {
	std::cout << "QUESTION 1" << std::endl;
	std:: cout << "What are the steps for compiling source code into machine code?" << std::endl;
	std::cout << "A. Preprocessing, compiling, assembling, linking" << std::endl;
	std::cout << "B. Writing, compiling, debugging, testing" << std::endl;
	std::cout << "C. Processing, creating, asserting, clang" << std::endl;
	std::cout << "D. Make" << std::endl;
	char answer1;
	char correct_answer1 = 'A';
	std::cout << "Answer: ";
	std::cin >> answer1;
	if(after_answer(player, answer1, correct_answer1) == 0) {
		return false;
	}
	player.display();
	return true;
}

bool ask_to_play() {
	char answer;
	std::cout << "\nPlay again? (y or n)" << std::endl;
	std::cin >> answer;
	if (answer == 'n' || answer == 'N') {
		return false;
	} else if (answer == 'y' || answer == 'Y') {
		return true;
	} else {
		std::cout << "Please respond with 'y' or 'n'" << std::endl;
		ask_to_play();
	}
}