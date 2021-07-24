#include <iostream>
#include "Player.h"

// Implementation of constructor
Player::Player (int xp_val, int score_val, int streak_val)
	: xp{xp_val}, score{score_val}, streak{streak_val} {
	}
	
// implementation of copy constructor
Player::Player (const Player &source)
	: Player(source.xp, source.score, source.streak) {
	}
	
// Implement destructor
Player::~Player() {
}

void Player::display() const {
		std::cout << "XP = " << xp << std::endl;
		std::cout << "Score = " << score << std::endl;
		std::cout << "Streak = " << streak << std::endl;
}