#include <iostream>
#include <stdlib.h> //for system()

// loses 1 xp after answer is wrong
// gains 1 xp if answers 5 questions right in a row (if streak = 5)
// when streak is equal to 5, increment xp and set streak back to 0
// 20 seconds to answer the question
// max of 20 points per question, depending on the time it takes to answer the question
// for every second spent, points for the question decreases by 1

// do while loop for main function
// break the loop when user says he doesnt want to keep playing
// after a question is answered, update xp and score
// if after decrementing xp, the xp is 0, display game over and ask if the user wants to start a new game
// after the last question, display a congratulations message and ask if the user wants to play again
// display score and xp before every question

void display_instructions() {
	system("cls");
	char ready;
	std::cout << "This game is based on CS50's 2021 trivia show" << std::endl;
	std::cout << "\nRULES" << std::endl;
	std::cout << "\n1. You have 20 seconds to answer each question, after this, your score won't be incremented";
	std::cout << "\n2. A max of 20 points is awarded per question. For each second spent, your possible score decreases by 1";
	std::cout << "\n3. You have 3 xp, for every wrong answer, your xp decrements by 1. When xp reaches 0, you lose the game";
	std::cout << "\n4. If you answer 5 questions in a row correctly, you will be rewarded with one extra xp";
	std::cout << "\n\nGOOD LUCK !!\n" << std::endl;
	std::cout << "When ready, type any key + enter to start the game" << std::endl;
	std::cin >> ready;
	system("cls");
}