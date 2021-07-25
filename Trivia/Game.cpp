#include "Game.h"

// From Questions.cpp
char display_question(int question_number);

void play_game(Player player) {
	int question_number {1};
	char correct_answer;
	while(question_number < 18) {
		int question_score {30};
		correct_answer = display_question(question_number);
		
		time_t currentTime;
		struct tm *localTime;
		
		time(&currentTime);                   // Get the current time
		localTime = localtime(&currentTime);  // Convert the current time to the local time
		int Hour_before = localTime->tm_hour;
		int Min_before = localTime->tm_min;
		int Sec_before = localTime->tm_sec;
		
		char answer;
		std::cout << "Answer: ";
		std::cin >> answer;
		answer = toupper(answer);
		std::cout << "\n";
		
		time(&currentTime);                   // Get the current time
		localTime = localtime(&currentTime);  // Convert the current time to the local time
		int Hour_after = localTime->tm_hour;
		int Min_after = localTime->tm_min;
		int Sec_after = localTime->tm_sec;
		
		if (Sec_after > Sec_before && Min_after == Min_before && Hour_after == Hour_before) {
			question_score -= Sec_after - Sec_before;
		} else if ((Sec_after < Sec_before && Min_after == Min_before + 1 && Hour_after == Hour_before) || Sec_after < Sec_before && Min_after == 0 && Min_before == 59 && Hour_after == Hour_before + 1) {
			question_score -= (Sec_after + 60) - Sec_before;
		} else if (Sec_after == Sec_before && Min_after == Min_before && Hour_after == Hour_before) {
			// do nothing to question_score
		} else {
			question_score = 0;
		}
		if(answer == correct_answer && question_score > 0) {
			std::cout << "You are CORRECT, here are your stats: " << std::endl;
			increment_streak(player);
			increment_score(player, question_score);
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
			system("cls");
			break;
		}
		player.display();
		std::cout << "\n";
		question_number++;
		char next_question;
		std::cout << "Press any key + enter for the next question";
		std::cin >> next_question;
		system("cls");
	}
	if(question_number > 17) {
		std::cout << "CONGRATS, YOU WON" << std::endl;
	} else {
		std::cout << "GAME OVER" << std::endl;
	}
	std::cout << "Your score was: " << player.get_score() << std::endl;
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