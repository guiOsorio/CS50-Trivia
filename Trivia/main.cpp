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

void play_game(Player player);

bool ask_to_play();

void increment_streak(Player &player) {
	player.increment_streak();
}

void increment_score(Player &player) {
	player.increment_score();
}

void reset_streak(Player &player) {
	player.reset_streak();
}

void increment_xp(Player &player) {
	player.increment_xp();
}

void decrement_xp(Player &player) {
	player.decrement_xp();
}

char display_question(int question_number);


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


void play_game(Player player) {
	int question_number {1};
	char correct_answer;
	bool game_lost {false};
	while(question_number < 18) {
		correct_answer = display_question(question_number);
		char answer;
		std::cout << "Answer: ";
		std::cin >> answer;
		answer = toupper(answer);
		std::cout << "\n";
		if(answer == correct_answer) {
			std::cout << "You are CORRECT, here are your stats: " << std::endl;
			increment_streak(player);
			increment_score(player);
		} else {
			std::cout << "WRONG answer, here are your stats: " << std::endl;
			reset_streak(player);
			decrement_xp(player);
		}
		if(player.get_streak() == 5) {
			increment_xp(player);
			reset_streak(player);
		}
		if(player.get_xp() == 0) {
			player.display();
			break;
		}
		player.display();
		std::cout << "\n";
		question_number++;
	}
	if(question_number > 17) {
		std::cout << "CONGRATS, YOU WON" << std::endl;
	} else {
		std::cout << "GAME OVER, TRY AGAIN" << std::endl;
	}
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