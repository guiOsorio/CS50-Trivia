#ifndef _GAME_H_
#define _GAME_H_

#include "Player.h"

// From Player.h
void increment_streak(Player &player) {
	player.increment_streak();
}

void increment_score(Player &player, int question_score) {
	player.increment_score(question_score);
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

// From Questions.cpp
char display_question(int question_number);



#endif
